"""
range_search.py
sidb95 
bhatoresiddharth@gmail.com
28 July 2024
"""

class Solution:
  def __init__(self):
    pass

  def rangeSearch(self, nums: List[int], k: int) -> bool:
    num1 = 0
    p = 0
    q = 0
    while ((num1 + q) < k)):
      p += 1
      q = 2 ** (p - 1)
      if ((num1 + q) > k)):
        num1 += (q / 2)
        q = 0
        p = 0
    if ((num1 + q) == k):
      return True
    else:
      return False

    