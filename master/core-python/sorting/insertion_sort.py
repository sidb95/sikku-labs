"""
insertion_sort.py
sidb95
bhatoresiddharth@gmail.com
23 July 2024
"""

class Solution:
  def __init__(self):
    pass

  def insertionSort(self, nums: List[int]) -> List[int]:
    n = len(nums)
    for i in range(0, n):
      for j in range(0, n):
        if (nums[i] < nums[j]):
          TEMP = nums[0]
          nums[0] = nums[j]
          for k in range(1, n):
            if (k == j):
              nums[j] = nums[i]
            else:
              TEMP1 = nums[k]
              nums[k] = TEMP
              TEMP = TEMP1
    return nums
