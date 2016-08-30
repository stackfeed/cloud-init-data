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
        H4sIAOfExVcAA4VRy4rbMBTd6ytO3nbBkZOBLhqS1UC7KHTRQgvDLGTpeiyiSBlJTjo0/ffKjr3potVGgnPPPQ/NJrzSloeGsRk+UoRy8kiezVgmW29QhK+f
        0cR4Dh84f6G4vuNr6U4cN4Qmx+2G7JogFK9fin/PdiLfnT8K71qrEMhftCSEKHxsz6iFNq0nOIsfZLUwyFTrtX2BNK5VhbY6JlIazdfJoa7xhMJiOs/OWrka
        4S1EOql8iucdYkOWIZ0ZHnUQlUk6nZ8IIaO+iKiTTO38yOpnAykUGquwKD6hVinHYrECN7riw9hw8yHbEOFO7hEZDZSgk7OFJ+OE+gvz1Mcdi651X4pIyToz
        Y/345qIw5g3XEXmfzElnVUD2UL4r19s8VeApek1h/1AybWPyIsw+QYxdG50CZ5gMG6Ft7bA5cEUXbltjsD0sN8h3Ce8NPmE+LENBryjxjOUSlSdx7H44GKIz
        5qNITxnF51k2PItNnjPlLDGW/Ue4W/oLh+UWJBuH6X5/wOOdIV1rlF1FVOnLWikphLrtutA2dKWQmkx3oJ+pmM0OvxnrnyX7A8kC3p7MAgAA
