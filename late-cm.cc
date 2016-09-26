#cloud-config
## This cloud init config moves config mangment tools to the step after runcmd.
#

merge_how: "dict(recurse_array,no_replace)+list(append)"
bootcmd:
  - |
      # Enable CM modules and put them on the step after runcmd
      #
      config_modules_file=$(grep -rl "^cloud_config_modules:" /etc/cloud/ | head -n1)

      sed -e '/cloud_config_modules/,/^\w*:/ {/ *- chef/d; s/\( *- \)\(runcmd\)/\1\2\n\1chef/}' \
          -e '/cloud_config_modules/,/^\w*:/ {/ *- puppet/d; s/\( *- \)\(runcmd\)/\1\2\n\1puppet/}' \
          -e '/cloud_config_modules/,/^\w*:/ {/ *- salt-minion/d; s/\( *- \)\(runcmd\)/\1\2\n\1salt-minion/}' \
          -i $config_modules_file
