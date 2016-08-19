#cloud-config

package_upgrade: true
packages:
  - python
  - curl
  - wget
  - htop
  - nano
  - virt-what

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
  - |
      . /var/lib/stackfeed/cc/functions
      cloud-init-per once get-salt get-salt.sh stable

# ---------- Files ----------
#

write_files:
  # stackfeed functions
  - path: /var/lib/stackfeed/cc/functions
    permissions: "0644"
    encoding: "gz+b64"
    content: |
        H4sIAGVVt1cAA1VRTU/cMBC9+1c8ggXZgwlLb6CVWlWq2tuKpeKA0MpJJhvDxnZtZ6sK+O+1vZ/4Ys+b8bw3b87PqlrpyveMneO3bWUgWBl6tvixXHy//zV/
        WMyqjXTVWtWVD7J57Yjaqmkq3zhlg2clNb0Bn397+Il3rBxZiD/gx/8TvL8jpWe56PYklUgfpQrojEOn1oRgIK0l6djfiC8jvkx4OcEbQzwpSPpmfJrjVBWL
        Zvzt5lZMb64/Mqp0ILeR6wh/ifAHy+gJl4Qj2co6Mn6mRUwGNZAZw9WWoE/5J5xBOBR8z1/g+Q6tySXpPIHvpECsCNd4xsXFUV1Z7p5iL22SbamjjNfcpDWa
        WBQaHbmP0kB6o5zRA+kATyEovfLonBmidq8GG0W9eKO38kttoMkHamHqF2qCn1wxpe0YYpuDd/ZfjJYmLm1WiBGCigxvgeJk2hJ5pwU//ihOdlvwaYHJp/G3
        PXi6ELN38L3qwnGww64OGwX/yrbGZV9jx+xYZsS+UbLIURidxnRnztxFB6EsZNs68h6mQ+gJK7UhDT0ONTm2yy1jeJi+Nz5oORCEkOu1UFbsqsjH2ZoxQLSX
        uIToeOL6D5tj8wAZAwAA

  # pynenv helper
  - path: /var/lib/stackfeed/cc/scripts/pyenv
    permissions: "0755"
    encoding: "gz+b64"
    content: |
        H4sIAMDJtVcAA61UTWvcMBC961dMswd5YVd7D5i2pC0ESin0WIJR7PGusrak6sM0hPz3jiTvV0ghhepieaQ38+bNjBbvNtG7zb3SG9QT2MewM5qxBTx4o5PF
        oew8yPwP5v4B2wDSg9I20kZ3YJ3pYoueMOhbabEDv8NhgNaMI13w0BsHHkNQegvkUjmjR9QBJuk8Y70zIzRNH0N02DSgRmtcILdKB7LqNqjEaDYnGoe9VZbC
        zj/+8biVbmvJNTLWDtJ7uPl6WxXmy2sGtD59/nFTX11d3Rg9oQu+JLeTxJvYJj69GmibeIdOaco2mEQ920X2cVi3PazTRW1m0FZNqA84n/UTFItlVIc95aq0
        Ck1TeRz6mVFaPlp0FZFdQT4Rx4vL0x06EE1rdK+2UMM3qtHlWU7c0dFBBPHRbWOS+3s+qToqklM2iVpTLJG0WL7mQ8iua+QMrvga+Yro+1Bz/J1kzr+9jEOo
        v8jB4wpkLlXNfTBUyeBiglAr2JrnakIBwqA0ev6moPEYNNpWevynoAWS2kzJ+wFBy/GNcVMlyY0mi6/5e8Jk0AfqdapReDzWslTiZSVVf1Go64uGcUiNri8u
        sL/VN01IdU4zfxJRXy1PibziEhgN8QLW/3OxBWM7aufcX5wzpT1taPBE7nZ2pJ0GbikOuamDTD+LrndFj4ImPXV1ebwC7pLiZ7i542bkicPcUJxeERrB/Qom
        cpunWQxGdhXFWAoVcCS5CnZPsPxuiF/RBKz2RcXphXkq5jMKc//dnYqZXO1FtGlqy/Xc5RV/en56rp+euSBSowxV4bvK/ErVUm4pf3oftAknCY/KiHYwHsnt
        H/lxFymgBQAA

  # get-salt
  - path: /var/lib/stackfeed/cc/scripts/get-salt.sh
    permissions: "0755"
    encoding: "gz+b64"
    content: |
        H4sIADEytlcAA4WOywrCMBBF9/MVIxbRRRrXhaIuhYLgYyVS2lLbYNLUzIiC+u+mqOCi4GoYOOfeOxzIXDWSaoAhLhviTGukTDMa1SjbwGaRbNPdOolr5pYi
        KXNrmdhlbdhhXihOYWENqLecZq6iOLjPI+H/XJdPAEfxFMbFxWkUtElQWJRsWvlRRBcUUo3BtwwfD7xWJaM4r/6gE9j70H7ogKMR+tuf8Du4K/Qrgxk4g+LY
        awCUN8UYOIIXpA/eFTYBAAA=
