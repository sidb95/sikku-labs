"""
bubble_sort.py
sidb95
bhatoresiddharth@gmail.com 
21 July 2024
"""

class Solution:
  def __init__(self):
    pass

  def bubbleSort(self, nums: List[int], n: int) -> List[int]:
    FLAG = True
    while (FLAG):
      FLAG = False
      for i in range(0, n - 1):
        for j in range(i + 1, n):
          if (nums[i] > nums[j]):
            FLAG = True
            TEMP = nums[i]
            nums[i] = nums[j]
            nums[j] = TEMP
      if not FLAG:
        break
    return nums
          