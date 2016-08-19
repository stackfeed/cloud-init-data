#!/bin/sh

# Install salt minion
SALT_URL=https://bootstrap.saltstack.com
install_args=${@:-stable}

rs=0
(curl -sSL -o /tmp/install-salt.sh $SALT_URL || wget -qO /tmp/install-salt.sh $SALT_URL)
[ -s /tmp/install-salt.sh ] && sh /tmp/install-salt.sh $install_args || rs=$?
rm -f /tmp/install-salt.sh

exit $rs
