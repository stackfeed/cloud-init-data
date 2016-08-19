#cloud-config

merge_how: "dict(recurse_array,no_replace)+list(append)"
bootcmd:
  - |
      # Enable config module - salt-minion if it's disabled (ex. on Amazon linux)
      #
      config_modules_file=$(grep -rl "\- runcmd" /etc/cloud/ | head -n1)
      if (! grep -q salt-minion $config_modules_file ); then
        spaces=$(sed -n 's/- runcmd//p' $config_modules_file)
      sed -i "/- runcmd/i \\${spaces}- salt-minion" $config_modules_file
      fi

runcmd:
  - cloud-init-per once get-salt get-salt.sh stable

# ---------- Files ----------
#

write_files:
  # get-salt
  - path: /var/lib/stackfeed/cc/scripts/get-salt.sh
    permissions: "0755"
    encoding: "gz+b64"
    content: |
        H4sIADEytlcAA4WOywrCMBBF9/MVIxbRRRrXhaIuhYLgYyVS2lLbYNLUzIiC+u+mqOCi4GoYOOfeOxzIXDWSaoAhLhviTGukTDMa1SjbwGaRbNPdOolr5pYi
        KXNrmdhlbdhhXihOYWENqLecZq6iOLjPI+H/XJdPAEfxFMbFxWkUtElQWJRsWvlRRBcUUo3BtwwfD7xWJaM4r/6gE9j70H7ogKMR+tuf8Du4K/Qrgxk4g+LY
        awCUN8UYOIIXpA/eFTYBAAA=
