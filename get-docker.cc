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
        H4sIAAu3xVcAA51STY/TMBS8+1dMP1QcpDRJV3Cgak9IXJA4LBJIqz2k9svGqtfO+qNlRfnvOGnTE7Ba3snWvHkzb+zZpNgpU/iWsRk+UYC0Yk+OzRgX0Wnk
        /vYz2hA6/6EoHigsz/hS2McCJ/g2w+kEfkwQ8qcv+b97e5Fv1u1rZ6OR8OQOShB8qF2IHZpa6egI1uA7GVVrcBmdMg8Q2kaZK6NCIqXWbJkcqgZ3yA2mc94p
        aRv4Zx/oUWZT3K8RWjIMqWa4pQO5NK0OCe6CR7BwNKiO+/aNjoJT5DfvhpsyIdmr9aZiw/3YKk3gmFwoqaGxqLaFpENhotZYbRcVsnXCB0JfZ0ci6D/p9XWH
        +UUWOT2hxD0WC+wc1fs+WK+JOsxHL1faaHXO+eWYV1k2wNIaYo0aoq5TXo1110fFVxtqrZ9xHJH3KU9hjfTgN+XbcrnKUrDj9JuSXVNIEGOvzuA/1vvLasNa
        jL8g3A/9ie1iBRKtxXSz2eLjmSFs1NK8CdilDxeFIO+b2GehjO9DITmZrkE/UjDVGr8YG44l+w0LrrjJIgMAAA==
