#cloud-config

write_files:
  - path: /var/lib/stackfeed/cc/scripts/get-docker.sh
    permissions: "0755"
    encoding: "gz+b64"
    content: |
      H4sIABLLtVcAAzWQO0/DMBSFd/+K0yYKCSJx2koMRC0DAwsbSAyIIY+bh+raxXZaKsp/xwmJp2sdn++eY2/Bi05y0zLm4ZksKlXuSTOPlb0WiM3rC1prj+aB
      84Zs8i8npTpwXOFsH/AfEUtCik8EAX6wC9agslVYPqleVPLGopPG5kJM8Dsc8ktBqMmWLfKGpDUY1ymNczOGGFz03RmbLLNhsFhl+B1CvufuUruXc1K8qQF+
      wXlW7mGoVLIyCDfpbZqsI9dHk9Udme0mZZ20pE+52DqJsXPbCUK4mIAubK0Q7HhFJy57IaLMKQzuuK4TBTF9zY0LTfkeV/cbgugIf6aPlnmrH4bTGK+iiLmC
      xNjYK2V/OF7UXIQBAAA=

runcmd:
  - cloud-init-per once get-docker $SC_SCRIPTS/get-docker.sh
