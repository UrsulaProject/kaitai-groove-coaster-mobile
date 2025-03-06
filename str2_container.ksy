meta:
  id: str2_container
seq:
    - id: len
      type: u2be
    - id: string
      type: str
      encoding: utf-8
      size: len