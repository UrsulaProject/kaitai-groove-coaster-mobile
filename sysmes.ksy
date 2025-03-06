meta:
  id: "sysmes"
  imports:
    - str2_container
seq:
  - id: cnt
    type: u2be
  - id: messages
    type: str2_container
    repeat: expr
    repeat-expr: cnt