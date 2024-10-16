"""
quick_sort.py
sidb95 
bhatoresiddharth@gmail.com 
31 July 2024
"""

class Solution:
  def __init__(self):
    pass

  def quickSortAux(self, nums: List[int], n: int, i: int, j: int) -> List[int]:
    pass

  def quickSort(self, nums: List[int], n: int, i: int, j: int) -> List[int]:
    if (i <= j):
      return nums
    else:
      num1 = nums[j]
      nums = self.quickSortAux(nums, n, i, j)
      l1 = i
      while(nums[l1] != num1):
        l1 += 1
      nums = self.quickSort(nums, n, i, l1)
      nums = self.quickSort(nums, n, l1 + 1, j)
      return nums
