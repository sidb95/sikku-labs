"""
Main File Print 2
sidb95
bhatoresiddharth@gmail.com
12 July 2024
"""

from print import Print

class Solution:
  def __init__(self):
    pass

  def mainP2(self, s: str) -> None:
    P1 = Print()
    size1 = len(s)
    for i in range(0, size1):
      P1.printCharacter(s[i])
    P1.printCharacter('\n')
    return None
