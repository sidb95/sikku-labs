"""
print.py
sidb95 
bhatoresiddharth@gmail.com
12 July 2024
"""

class Print:
  def __init__(self):
    pass

  def printString(self, s: str) -> None:
    print(s)
    return

  def printCharacter(self, c: char) -> None:
    print(c, end = "")
    return
  
  def lengthString(self, s: str) -> int:
    return len(s)
