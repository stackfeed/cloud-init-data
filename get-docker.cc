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
        H4sICPUD5FcAA2dldC1kb2NrZXIuc2gAhVJNj9MwEL37V7x+J0hp0q7gQNWekOCAxIEVIK1WWteebKy6dtd2WirKf8f5KB+9kEtGnpn33ryZ0SDfKpP7irER
        3lOAtGJHjo1YSUFU66cEonYa2RdscknH3NRaYzoFicpi2OX8549DpLhckOD0HEFi9e+S7uHlUxZLnti4hUUVwsG/zfOYm3eMc2H3OS7olHy1bsedrY2EJ3dU
        guADd6E+oORK145gDb6RUVwjkbVT5hlC21pmyqgQm2JpOo9jqBIPyCRyV8cxzz7QXvZ/PK4QKjIM8dtMl73g9XqDe3duEIOFVJ5vdaRvVAZwEdSRBxXZS+t6
        t+a9xmGL5EkiU5j5SfYBpYxTTiYz5Fptb/jzf7u7Zk10wOsubqtE0JCc9tZkjrTl8ibnqHXmurhStf7xaMIfgfHl3gau9Rmna+ZNFCqskR7JXfGqmC/T6Jaj
        4BT59V3BlAlRF9frmGLsVKloQoJBjwhlSovFXzex3EwXSFcx3wp8wLgHQ0YvKPDYnMTWEd81h9LNOb6StC1X8nGS9GG2SFMmrSHGkv8QN6A/brb4rusQttbS
        zAK2cY21EOR9WTdeKOMbU0gOhivQ92jMYoWfjLVhwX4B+9EwSBwDAAA=
