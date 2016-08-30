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
        H4sIALLSxVcAA4VSTY/TMBC9+1e8pl8JUpq2KzhQtSckOCBxYAUrrVZa155srLp213ZaKsp/x/noAnshl4w8M++9eTPDQbFVpvAVY0N8pABpxY4cG7KSgqjW
        jylE7TTyb9gUko6FqbXGZAISlUXS5fzXzwkyXC5IcXqKILH6paR7eP6Sx5JHNmphUYVw8O+LIuZmHeNM2H2BCzol363bcWdrI+HJHZUg+MBdqA8oudK1I1iD
        OzKKa6Sydso8QWhby1wZFWJTLM1mcQxV4h65QTJKD0raEv7sA+1lluBhhVCRYYjfZrLs9a7XG9y6cwMYLKTyfKsjeyMygIugjjyoSF5a15s16yUmLZIniVxh
        6sf5J5QyDjkeT1FotS166v5f/NvdNWuiA952cVslgobktLcmd6Qtl69yjlpjrnsrVWsfjx78ERhfbm3gWp9xumbeRaHCGumR3szfzGfLLJrlKDhFfn0zZ8qE
        qIvrdUwxdqpUNCHFoEeEMqXF4q+TWG4mC2SrmG8F3mPUgyGnZ8zx0FzE1hHfNXfSzTm6krQtV/JRmvZhvsgyJq0hxtL/EDegP19t8UPXIWytpZkGbOMaayHI
        +7JuvFDGN6aQHCQr0I9ozGKFX4y14Zz9BgS6CpwbAwAA
