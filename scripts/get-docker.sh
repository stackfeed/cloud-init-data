#!/bin/sh

# Get docker
#
fetch=`( curl -V >/dev/null && echo "curl -sSL" ) || ( wget -V && echo "wget -qO-" )`
$fetch https://get.docker.com/ | sh

# Workaround service startup failure on Xenial (during cloud-init setup).
#
if [ -d /run/systemd/system ]; then
    >&2 echo "==> Trying to disable socket activation for docker.service"
    sed -i 's%-H fd://%%' /lib/systemd/system/docker.service
    sleep 5
    systemctl daemon-reload
    systemctl restart docker
fi

# Wait for docker
# Totally wait for 6 seconds (30*0.2)
#
retries=30
interval=0.2

while ( ! docker info 1>/dev/null 2>&1 ); do
    [ $retries -eq 0 ] && break || sleep $interval
    retries=$((retries-1))
done

( docker info 1>/dev/null 2>&1 ) || { >&2 echo "==> Docker couldn't be successfully installed!"; exit 1; }

exit 0
