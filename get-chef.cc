#cloud-config
## Installs latest chef using system ruby
#

merge_how: "dict(recurse_array,no_replace)+list(append)"
packages:
  - build-essential
  - ruby
  - ruby-dev
  - git

runcmd:
  - cloud-init-per once get-berks sh -c 'gem install chef berkshelf --no-ri --no-rdoc'
