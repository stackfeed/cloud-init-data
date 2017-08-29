#cloud-config

merge_how: "dict(recurse_array,no_replace)+list(append)"
runcmd:
  - cloud-init-per once get-docker get-docker.sh
  - |
      # Install dockerize file generator
      #
      url="https://github.com/jwilder/dockerize/releases/download/v0.5.0/dockerize-linux-amd64-v0.5.0.tar.gz"
      cloud-init-per once get-dockerize sh -c "curl -sSL '$url' | tar xz -C /usr/local/bin && chmod +x /usr/local/bin/dockerize"

# ---------- Files ----------
#

write_files:
  - path: /var/lib/stackfeed/cc/scripts/get-docker.sh
    permissions: "0755"
    encoding: "gz+b64"
    content: |
        H4sIAPCfpVkAA21STY/TMBS8+1dMvxOkNG1XcKBqLyDBAYkDK0BaIda1XzZWXbtrOy3Vlv+O89GFrTjFeW/e88x4Br18o0zuS8YG+EAB0ootOTZgBQVRru4T
        iMppZF+xziUdclNpjfEYJEqLftvzXz71keJ8RoLjQ1wS0c+QtvD4OYuQezZs1qIMYe/f5nnsTdsbp8LucpzRMnlXkthCFR0dKA9XGaPMA2srP7vfJMUTAy64
        vcf8H56L9XjOftcLv3EVUFj3rA+3NnCtTzheOm/gSVgjPZKb2avZdJFGFxwFp8ivbmZMmUDuwPUqthg7lkpT1NvDS0JAuoylmhPuMOzmkdEjZvhR27JxxLe1
        WV4T7TG87G1GLvcNk6Q7ZvM0jaINNTKs23JnKyMjWXdQguADd6Hao+BKV45gDb6TUVwjkZWrGQltK5kpE3V6itB0GoVFb++QSeSRd+5PPtBOdt+W5n+kRWWh
        JNMQXY8X3QOvVmvculMNCBZSeb6Jzvh6NICLoA48qMjqr/vTjnu/2eRJIlOY+FH2EYWMqRiNJsi12lzxyl9Ot8ONh6/bc4MSQUNy2lmTOdKWy6ueo8axSxAK
        xa4iVT/N05W+9228hK20NJOATRRYCUHeF1UdImV8nSaSvf4S9Cs6PV8iBq85ztgfQFoEoGYDAAA=
