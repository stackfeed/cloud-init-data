#cloud-config
## Installs berkshelf using system ruby
#

merge_how: "dict(recurse_array,no_replace)+list(append)"
packages:
  - ruby
  - git

runcmd:
  - cloud-init-per once get-berks sh -c 'gem install berkshelf --no-ri --no-rdoc'
