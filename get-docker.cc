#cloud-config

merge_how: "dict(recurse_array,no_replace)+list(append)"
runcmd:
  - cloud-init-per once get-docker get-docker.sh

# ---------- Files ----------
#

write_files:
  - path: /var/lib/stackfeed/cc/scripts/get-docker.sh
    permissions: "0755"
    encoding: "gz+b64"
    content: |
        H4sIAKlVt1cAAzVQu07DMBTd/RWnTRUSROKklRiIGgYGFjaQGBBDmtw8VNcuttNSUf4dJyR3ulfH52VvwXed5KZlzMMzWVSq3JNmHit7LRCZ1xe01h7NA+cN
        2fgfjkt14LjC0T6wekQkCQk+4fv4Qe6vQWWrsHxSvajkjUUnjS2EmMTvcCguO0JNtmxRNCStwWinNM7NGGJg0XdnbLzMhsUizfA7hHwv3FG7l3NSvKlB/ILz
        jNzDUKlkZRBsktskXoeujyarOzLbTcI6aUmfCrF1EGPnthOEAItJ0aWtFdKcV3Tisnex17mfIswczuDGVZ7EENHXXHynqdjj6j5FEB2xmk1Gymy+CoJpjdIw
        ZK4nMTbWS9gft2k70IsBAAA=
