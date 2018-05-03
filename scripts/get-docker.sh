#!/bin/sh

# Get docker channel
docker_channel() {
  info=$(command which lsb_release)

  # no lsb_release binary
  if [ -z "$info" ]; then
    return
  fi

  # CHANNEL for get-docker.sh (basically component name stable, edge, test)
  case $($info -sc) in
    bionic)
      echo 'test'
      ;;
    *)
      ;;
  esac
}

# Check if docker is running
docker_running() {
   docker ps 1>/dev/null 2>&1
}

# ------------------------------------------------------------------------------

# Get docker
#
CHANNEL=$(docker_channel)
export CHANNEL

fetch=`( curl -V >/dev/null && echo "curl -sSL" ) || ( wget -V && echo "wget -qO-" )`
$fetch https://get.docker.com/ | sh



# Wait for docker
# Totally wait for 6 seconds (30*0.2)
#
retries=30
interval=0.2

while ( ! docker_running  ); do
    [ $retries -eq 0 ] && break || sleep $interval
    retries=$((retries-1))
done

# Workaround service startup failure on Xenial (during cloud-init setup).
#
if [ -d /run/systemd/system ] && ( ! docker_running ); then
    >&2 echo "==> Trying to disable socket activation for docker.service"
    sed -i 's%-H fd://%%' /lib/systemd/system/docker.service
    sleep 5
    systemctl daemon-reload
    systemctl restart docker
fi

docker_running || { >&2 echo "==> Docker couldn't be successfully installed!"; exit 1; }

exit 0
