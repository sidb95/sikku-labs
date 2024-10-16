"""
selection_sort.py
sidb95 
bhatoresiddharth@gmail.com 
22 Jul 2024
"""

class Solution:
  def __init__(self):
    pass

  def minElement(self, nums: List[int]) -> int:
    n = len(nums)
    minVal = nums[0]
    index = 0
    for i in range(1, n):
      if (minVal > nums[i]):
        minVal = min(minVal, nums[i])
        index = i
    nums[index] = INT_MAX
    return minVal

  def selectionSort(self, nums: List[int]) -> List[int]:
    n = len(nums)
    arr = []
    for i in range(0, n):
      arr.append(minElement(nums))
    return arr

    
