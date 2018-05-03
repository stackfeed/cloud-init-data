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
        H4sIAGsU61oAA61UTW8aMRC97694AQK7UZeFRO2hCKQqrZpDlB4atZWiKvF6h6yFsYntTUKT/vfa+1EB6rEclrE9M35v3oz7R1kuVGbLKOrjMzkUmq/IgJdM
        KZJRs7xtl3GClwgQaqnng5jr9ZqpAk+l4CWkzW8NSWKWksg79aH07ib8PcxsQ/gSN0h/oTcIiXr4OYMrSfkTwJCrTDCXoklyfvHh6urTJZba4J5c2gAa2xJx
        zqzgTMotPJKNVqQcFFsTrGO5pDeg4t5/HVmX+Fw8gBjE9aVILU88j/rOXGgleFLbAPFSYxSCRu3ObFYbJ8numizj0e9QtfOS+CqQaksnLEyllFD3XfXaZVu9
        zm9jMV1kBT1mqpISp4vhtEmY/tffvrBRP2or6gXcFzeJ6HmjjetKHkVLcryc38XglZFIv2EH7nDYVKrXnNmvlz0keH1FjCevU/D+69JsPHxJvctdNKjTonRu
        Y99nmT8bt6J6GTO8IjRjQP2dCVfr3kHHtXa13k/dyTtY4loVFvHZ5GQyPk08Qd9DRpCdn00ioRyZRybn/iiKfKNK8gCPsC8MkMz8Vi3vDQZtPFJ6wAQ/A4/c
        EFsFdlYSbTDo8nY9W983iOPWTKdJ4sVXVNPQZsWMrvykWB8keN2gxlUbLJmQlSFohR+kBJOIi8oERFzqqkiF8jytH4lNMvbEmsEpkHncmd1aR+ui/W9g/oNa
        sjNci+Fpq8h8vsC12QYHp1EIGwYGNoQ6MO7EI3N+KnaqP26x9+pMlgqkAiN7nF5gWXgZj49HyKTID3Bl+9FNcF3Dt41de3EnUTBaa5X610Kz4uDMUF2xrhHC
        23BA00vzcsDvY/uS6UoWauSQe4IV52TtsgpNJJQN3UTFUW8GevaVns7gB7A2J9EfJ6VJExoFAAA=
