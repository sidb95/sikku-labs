"""
Main File Print 3
sidb95
bhatoresiddharth@gmail.com
12 July 2024
"""

from print import Print

class Solution:
  def __init__(self):
    pass

  def mainP3Aux(self, s: str, n: int, i: int) -> None:
    P1 = Print()
    if (i == n):
      P1.printCharacter('\n')
      return None
    else:
      P1.printCharacter(s[i])
    self.mainP3Aux(self, s, n, i +1)
    return None

  def mainP3(self, s: str) -> None:
    self.mainP3Aux(self, s, len(s), 0)
    return None

"""
Main Function 3
"""
def __main__():
  pass
