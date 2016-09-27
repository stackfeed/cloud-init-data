#cloud-config
## Installs latest chef using system ruby
#

merge_how: "dict(recurse_array,no_replace)+list(append)"
packages:
  - build-essential
  - git

runcmd:
  - cloud-init-per once get-berks sh -c 'curl -sSL https://omnitruck.chef.io/install.sh | sh && /opt/chef/embedded/bin/gem install berkshelf --no-ri --no-rdoc'
