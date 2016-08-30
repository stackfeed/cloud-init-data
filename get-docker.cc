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
        H4sIAHi8xVcAA52SS2/bMBCE7/wV4wdcqYAs2UF6qGCfCvRSoIcUaIEgB5lcRYQZUuHDblD3v5dSJLU9NAXCE4nh7M5+5GKWH6TOXcPYAh/JQxh+JMsWLOHB
        KmTu5hMa71v3Ps/vya+f9TU3DzkucE2KywXJOUrIHj9nL9/tmnw19lhZE7SAI3uSnOB8ZX1oUVdSBUswGt9Iy0ohEcFKfQ+uTBCZ1NJHU7yarmNCWeMWmcZ8
        mbRSmBruyXl6EOkcdyV8Q5ohrgVu6EQ2Vqt8lFvv4A0s9V3HebuLlryV5HbX/UlqH+NVardl/fncSEVIMBvacK+64D64oQY2+1zQKddBKWz3qw3SMkq9uVt/
        2kw7mMq/q02Bysl2i+UQDBk9osAdViscLFXHDr1TRC2WY9rJNg6zTJJhm23StJeF0cRq2T9GFYnWxk7Pji/GV0o94Twq7yJxbrRwSK6Kt8V6m0b0Y/Wrgk2c
        osTYb0oDFKlr8xKZV4z3j9H6sVjyn8Zd0R/Yr7Yg3hjMd7s9Pjw7uAlK6Dceh/glA+fkXB06FlK7DgqJ2bwEfY9gNiV+MtZvC/YLJLDgVkQDAAA=
