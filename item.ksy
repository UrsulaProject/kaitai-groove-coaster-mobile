meta:
  id: "item"
  imports:
    - str_container
seq:
  - id: cnt
    type: u2be
  - id: entries
    type: item
    repeat: expr
    repeat-expr: cnt
types:
  item:
    seq:
      - id: item_name1
        type: str_container
      - id: item_name2
        type: str_container
      - id: b1
        type: u1
      - id: i1
        type: u4be
      - id: i2
        type: u4be
      - id: b2
        type: u1
      - id: i3
        type: u4be
      - id: b3
        type: u1
      - id: i4
        type: u4be
      - id: b4
        type: u1
      - id: i5
        type: u4be
      - id: b5
        type: u1