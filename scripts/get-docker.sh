#!/bin/sh

# Get docker
#
(curl -sSL https://get.docker.com/ | sh) || (wget -qO- https://get.docker.com/ | sh)

# Workaround service startup failure on Xenial (during cloud-init setup).
#
if [ -n "$(pidof systemd)" ]; then
    # Several attempts to restart docker
    retries=5
    interval=1

    while ( ! docker info 1>/dev/null 2>&1 ); do
        systemctl restart docker
        [ $retries -eq 0 ] && break || sleep $interval
        retries=$((retries-1))
    done
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
