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

# stackfeed functions
write_files:
  - path: /var/lib/stackfeed/cc/functions
    permissions: "0644"
    encoding: "gz+b64"
    content: |
        H4sIAPtLt1cAA1VRXU/jMBB8z68YggXpgwnl3kCVDiGd7t4qyokHhCqn2TSGxs7ZTk8nyn+/tfuJFSne2fXO7Oz5WVlpU/o2y87xu69VIPQqtNnsx3z28Phr
        +jSblGvlypWuSh/U4r0hqku/4M/pPvisoEVrIab3Tz+xwdJRD/kH4vh+hM0GMT1JRbcnqUj6rHRAYx0avSIEC9X3pFz2l/E54/OIFyN8ZOATg6hvIsYpjlVc
        NBEfN7dyfHP9mVBtArm1WjH8jeHPLKEnXAqOVK0qZvxKC04G3ZEdwtWWoI35F5xBOuRiz5/j9Q61TSXxvEDspEAuCdd4xcXFUV1R7K5yL22UbKlYxntqUltD
        GQtlRx5ZGsistbOmIxPgKQRtlh6Nsx1r97rrWdSbt2YrvzAWhnygGrZ6o0Xwo6tMm34I3ObgXf+Po7nlpU1yOUBSnuAtkJ9MWyDtNBfHF/nJbnMxzjH6Mv62
        h4g/cPYOvtVNOA522NVhoxDfs61xyVfumBxLjNg3ihY5CoMzGO/MmTp2ELqHqmtH3sM2CC1hqddkYIauIpftcnMOD9O31gejOoKUarWSupe7KvI822IIkPUl
        LiEbEbn+A0QKE5QZAwAA

# pyenv script
write_files:
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
