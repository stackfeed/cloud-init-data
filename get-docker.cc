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
        H4sIABN3t1cAA4VRy0oDMRTd5ytOH9SMMJ1pCy4c2pXgRnChoCAupskdJzQmNQ+rWP/dzLR1qVldOPeeV0aDYq1M4VvGRrimAGnFhhwbMS6i08j93Q3aELb+
        siheKEwP+FTY1wJ7+DbDfg++SxDyt9v8791O5MG6Te1sNBKe3LsSBB9qF+IWTa10dARr8EhG1RpcRqfMC4S2UebKqJCO0mo2TQ5VgyfkBsMx3yppG/hPH+hV
        ZkM8VwgtGYb0vCbaYlEdYRE0HPWSp7CN6o3Vib2x7rcC3NtQa/2J3Qm5SOrCGunBF+V5OZ1nyYaj4BT55aJkyoQUqdbLBDG2a5UmcAyOjFCmsZitCknvhYla
        Y76azJBVCe+dPmF8JENObyjxjMkEa0f1pmv5EGR8EulPTuJjzo9jPssyJq0hxvg/wh3pF1aTOUi0FsPlcoWrw4WwUUtzFrBO3xOFIO+b2HWhjO9KITkYVqCP
        VMyswjdj/ViyH7vG+stQAgAA
