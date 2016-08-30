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
        H4sIADDMxVcAA4VSy27bMBC88yvG8ksqIEt20B5q2KcC7aFADw3QAkEONLmKCNOkQ1J2jbr/XuphFMkh5UULze7McJbjUbFTpvA1Y2N8pgBpxZ4cG7NUNE4j
        99+/og7h6D8WxROFRY8vhD0UuMLXGa5XpOcIIX/+lr/d24r8sG7PnW2MhCd3UoLgA3ehOaLiSjeOYA1+klFcI5WNU+YJQttG5sqoEIdia7aIDlWFB+QGySQ9
        Kmkr+IsPdJBZgsc1Qk2GIZ7tbAUStUWy2Wxx7y4tYbCQyvOdjuqtywAugjrxoKJ4Zd2Qw2KwmHRMniRyhbmf5l9QyXjL6XSOQqtdMUgP3+LldD+siY5439dd
        lwgaktPBmtyRtly+whx1wdxWUqkuPh4z+Gcw/rm3gWt9wfmGfIhGhTXSI70r35WLVRbDchScIr+5K5kyIfriehMhxs61iiGkGA2MUKayWG4LSafCNFpjtZ0t
        ka0j3hl8wGQgQ07PKPGI2Qw7R3zfvoX+npObSDdyE5+k6VDmyyxj0hpiLP2PcEv6+9UWP/UTwjZamnnALq6xEYK8r5o2C2V8GwrJUbIG/YrBLNf4w1hXluwv
        l8WVevYCAAA=
