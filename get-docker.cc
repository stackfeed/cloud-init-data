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
        H4sIAHZvt1cAA4VRu27bMBTd+RXHtuBQBWTJNpChgtylQJcCHVIgAYwMMnkVEWZIh4+4Qdx/DyXbGVtOFzj3nhdnk3KnTOl7xmb4QQHSij05NmNcRKdR+Luf
        6EM4+K9l+URhccYXwj6XOMH3OU4n8GOCULz8Kv69y5xvsm+D1L11+9bZaCQ8uVclCD60LsQDulbp6AjW4IGMajW4jE6ZJwhtoyyUUSEdpdV8kXyqDlsUBtOM
        H5S0HfybD/Qs8ykea4SeDEN6XhMdsK4vsAgajkbJa+ROjcbaxN5Z91kEftvQav2G4xW5TerCGunB19WXarHKkw1HwSnyzbpiyoQUqdVNghg79koTOCYXRijT
        WSw3paTX0kStsdrMl8jrhI9Ot8guZCjoBRUeMZ9j56jdD12fg2RXkfHkKp5xfhmLZZ4zaQ0xxv8jPJC+YzNfgURvMW2aDb6fL4SNWpqbgF36nigEed/FoQtl
        /FAKycm0Bv1JxSxr/GVsHCv2AcPb/MtWAgAA
