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
        H4sIAIZnq1gAA41WbXPTOBD+rl+xOL42YXBM+jHBbYEGyhyFToG7YUgvKLEce+qXIMktvbb3229X8mvpwWWmHVveXT377O4jDR75qyT3VcwGA3gZiwjWRXGx
        wj8FSa40T1Mhx2wA8Ma+qY7BJrkUOXAFaaI0mgOHtFjzFNS10iKDKEkFFBKXpcgKLcwCBqNwZ+JbmUgRgi6KVE1hXcqUbK82Qj/ByBp4HsJKyAsVizQil5fV
        xvDp7C2seY5Ics1x20MpIiFFvhYEQscCRB7iNkwJDZ5g7MX87PcPy/nJ6cfPwbNn8+MjpopSorkTa71VU99X5VbIjMsLocdrpGGcFA7LhOYh15yRBysV34jg
        65prsDE+0cIU3KfwxQs7tGy5js9xLbK8GBZojdJD6Php3c1kPB6fMwbwIMUmwlYWl0mIXNVUFxF5KohkkSG7hlZ4RfsQLStRlQH3s8SPbfwfUNKafbiKkUCs
        RV301vAJhCLiZaox09M/j/zmgw1ZJdnJrw5ZvWFMLKmpSo29BUEJMDb/zrNtKtTUwiT+vQqH19iOVUwJ/NMCACoe1g6bJS5X43WR+dm1b7xrG+oMqt5XxrCD
        TrlU2JBbnRS5YlcxEYbYcEGBMw2n0dShrzMICwuEo7mLK8iKWaBfNGoe6Uc5LbF3A/f96cfnZ697H2ez5jXsuzVJLImrXzkvDvreQspCBtdCPeQgFF+zsMgF
        U3ESaXCHQ4z+5t2RNxmNiIcBfIiR2uLKjFkk9Dq2nSTFtlCJLuQ1lDKBqMCJ0ICjsS2kxvZDc1w3nA4YviyN73AEN2Zjm8nEPFOowHFv9n47fHznzPA9Ctyh
        WMcFuHtwCwrDeRJ2lf/lr8Pzx4cHvr87qsofgmsa6PYWxHdE6B7YDwOL1TwT8iTHfzs7zXslMjwMsfeSDUqBSzC6JjZZzwvFFjeYNHY3iG/qZRxlS971YxoN
        8WIuQ3g1//jyeHk8f35E2G4s0jCRM4tzMoO7Tgr4gd1Zvt/cGyq4wpaFBNsOgaBWoXQlQtVFMFnQfBPLQi+bXmmZxthI5/YqrDjDUgEJKOVy2PQv/VCHK+vs
        gp5xhkYzAui41SensTXlcRZ5EOzXkJN806I2+Fy7D4714qvbb+NdhzWxmvaAeh/rWRd10lgSWZVJ6/6FlOUFqb+Rz3PjZ+C5HTF3YL81anyP35/MA19jrj7O
        rhEEX2QrEaKEmtPOnCqAZ1eItN3LoYkiVVA3Xrek2BwgM+zdqEXdgnalAi8X8BQRo6FtX2nH1Ixk1RAB/eAEDy+s8T0twKnpr0w9W+pW+e6c+07uUAoeYrku
        iLh7OZmpt+pLimyObZZERHKOhNYS5sD5jHQ6t1lTdsRrp3VKK0PoOqyK0frewganDbxvsLsYmmN1cbC4jfR2MZrScHdD22lO9K5q7waIrCWbOsX7Ayb7figu
        /bzE2dnb35kQp6aphAyMDb6Tegee+vC22zt/I7TK0LGloHvFr0Iamybkt/fez0PeVB35TuA0C2lR59UdBkeyzMNHzg/aQL86kDlcVI/GfdtWTUOL1BYq+u9C
        9di0J39vHujG8j+2cAfgpYi0Cd6XBRKFz0UJWdneSOxBj1LA2xtH77L3qCMu7dRHSS3o9W2jusgQRvPFXs8ILk7hkBJoIGMj4fz1M+ipJLgdb8Z+ll3VxOZm
        5zQDO2EEcGBB0b2Fy02ZiVzb2xd7WGzvYUADewj/C41DL15iCwAA
