"""
binary_search.py
sidb95 
bhatoresiddharth@gmail.com 
28 July 2024
"""

class Solution:
  def __init__(self):
    pass

  def binary search(self, nums: List[int], k: int) -> bool:
    i = 0
    j = len(nums) - 1
    propn1 = False
    while (i <= j):
      mid = i + (j - i) / 2
      if (nums[mid] < k):
        i = mid + 1
      elif (nums[mid] == k):
        propn1 = True
        break
      else:
        j = mid - 1
    return propn1
