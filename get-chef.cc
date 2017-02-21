#cloud-config
## Installs latest chef using system ruby
#

merge_how: "dict(recurse_array,no_replace)+list(append)"
packages:
  - build-essential
  - git

runcmd:
  - cloud-init-per once get-berks sh -c 'curl -sSL https://omnitruck.chef.io/install.sh | sh && /opt/chef/embedded/bin/gem install berkshelf --no-ri --no-rdoc'

write_files:
  - path: /var/lib/stackfeed/cc/scripts/chef-install-cookbooks.sh
    permissions: "0755"
    encoding: "gz+b64"
    content: |
        H4sIADdwrFgAA41WbVPbOBD+rl+xdXyQdOqY8DGpgbakpXOlZYDeTafhqIjl2INfUkkm5YD77bcr+ZX22ssMjC3vrp59dveRBk/8qyT3VcwGA3gViwiWRXF9
        hX8KklxpnqZCjtkA4K19Ux2DVXIjcuAK0kRpNAcOabHkKahbpUUGUZIKKCQuS5EVWpgFDEbhTsXXMpEiBF0UqZrCspQp2W5WQj/DyBp4HsKVkNcqFmlELq+q
        jeHj6TtY8hyR5JrjtgdSREKKfCkIhI4FiDzEbZgSGjzB2Mv56e9nl/Pjk/NPwfPn86NDpopSorkTa71WU99X5VrIjMtrocdLpGGcFA7LhOYh15yRBysVX4ng
        y5JrsDE+0sIU3B347IUdWtZcxxe4FlleDAu0RukhdPy07GYyHo8vGAP4IcUmwloWN0mIXNVUFxF5KohkkSG7hlZ4TfsQLVeiKgPuZ4kf2/jfoaQ1+7CJkUCs
        RV301vAZhCLiZaox05M/D/3mgw1ZJdnJrw5ZvWFMLKmpSo29BUEJMDb/xrN1KtTUwiT+vQqH19iOVUwJ/NMCACoe1g6bJS6vxssi87Nb33jXNtQZVL0vjGEH
        nXCpsCHXOilyxTYxEYbYcEGBMw2n0dShrzMICwuEo7mLK8iKWaBfNGoe6Uc5XWLvBu6Hk/MXp296H2ez5jXsuzVJXBJXv3Je7Pe9hZSFDG6F+pGDUHzJwiIX
        TMVJpMEdDjH62/eH3mQ0Ih4GcBYjtcXGjFkk9DK2nSTFulCJLuQtlDKBqMCJ0ICjsS6kxvZDc1w3nA4Yvlwa3+EI7szGNpOJeaZQgePe7f528PTBmeF7FLhD
        sYwLcHfhHhSG8yRsK//zXwcXTw/2fX97VJU/BNc00P09iG+I0N23HwYWq3km5EmO/7a2mvdKZHgYYu8lK5QCl2B0TWyynheKNW4waezuEN/UyzjKlnzoxzQa
        4sVchvB6fv7q6PJo/uKQsN1ZpGEiZxbnZAYPnRTwA3uwfL99NFSwwZaFBNsOgaBWoXQlQtVFMFnQfBPLQl82vdIyjbGRzvUmrDjDUgEJKOVy0PQv/VCHK+vs
        mp5xhkYzAui41SensTXlcRZ5EOzVkJN81aI2+Fy7D4714ovbb+NthzWxmvaAeh/rWRd10lgSWZVJ6/6ZlOUlqb+RzwvjZ+C5HTF3YK81anyPPhzPA19jrj7O
        rhEEX2RXIkQJNaedOVUAz64QaXuUQxNFqqBuvG5JsTlAZti7UYu6Be1KBV4uYAcRo6FtX2nH1Ixk1RAB/eAYDy+s8SMtwKnpr0w9W+pW+R6cx07uUAoeYrmu
        ibhHOZmpt+pLimyObZZERHKOhNYS5sDFjHQ6t1lTdsRrp3VKK0PoOqyK0frewwqnDbyvsL0YmmN1sb+4j/R6MZrScHdD22lO9LZq7waIrCWbOsX7AyZ7fihu
        /LzE2dnd25oQp6aphAyMDb6TegeeOnvX7Z2/EVpl6NhS0L3iVyGNTRPy6wfv5yHv6o7cwaPxqR2b9wInW0ibQV7dZ3A8yzx84nynE/Srg5qDRvUo3bMt1jS3
        SG3Rov8uWo9ZewvozQbdXv7HFu4AvBSRNsH7EtHN+FNRQla2txR7+KM88PYW0rsAPukITqsEUVKLfH0DqS43hNV8sVc2go2TOaREGujYXDiT/Ux6yglux5ux
        n2VZZWhue04zxBNGAAcWFN1luFyVmci1vZGxHwvwIwxoYA/mfwFkAfWQdgsAAA==
