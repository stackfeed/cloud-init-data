#cloud-config

package_upgrade: true
packages:
  - python
  - curl
  - wget
  - htop
  - nano
  - virt-what

runcmd:
  - . /var/lib/stackfeed/cc/functions

# ---------- Files ----------
#

write_files:
  # stackfeed functions  
  - path: /var/lib/stackfeed/cc/functions
    permissions: "0644"
    encoding: "gz+b64"
    content: |
        H4sIAOt3t1cAA1VRy27bMBC86ysmCpHIB0ZxektgoEWBor0ZcYoeksCgpJXFRCJVknZQxPn3ruiHHF6knX3M7Oz5WV5ok/smSc7xu69UIPQqNMnix3Lx/f7X
        /GExyzfK5a0uch9U+VoTVXlZ5r50ug8+yahsLMT828NPbLFy1EP+hRj7J9huMaRnsej2JDWQ/lE6oLYOtW4JwUL1PSmXvDG+ZHw54NkE7wn4DcGgbyamMXYU
        nCY/E+83t3J6c/0RUW0CuY1qGf7C8EcS0RMuxY2qUgUzfqYFJ4PuyK7DVWx6a4b8I84gHVJx4E/xfIfKxpLhPULspUCuAq7xjIuLUV2W7X/ldBL9KJj/9djt
        W2LbxEF2xCtrKGHlbNE9awWZjXbWdGQCPIWgzcqjdrbjZbzuelb54q3Z7ZMZC0M+UAVbvFAZ/ORqdHSo43FHU/t/HC0tX3OWyjUkpRHeAemJDRnisVMxdqQn
        R0+fnsQ0xeSTM7spYviAs3fwja7DuOJu/OmxIb4mO0+j5Twxmhk5cRg0mMierp3BdG/T3LGB0D1UVTnyHrZGaAgrvSEDs+4Kcsk+t+TwuH9jfTCqI0ip2lbq
        Xu6r+JpblOsAWV3iErIWA9d/Av727jQDAAA=

  # pyenv script
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
