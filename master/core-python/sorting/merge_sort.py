"""
merge_sort.py
sidb95
bhatoresiddharth@gmail.com 
23 July 2024
"""

class Solution:
  def __init__(self):
    pass

  def mergeSortAux(self, arr: List[int], n: int, i: int, j: int) -> List[int]:
    pass

  def mergeSort(self, arr: List[int], n: i t, i: int, j: int) -> List[int]:
    if (i >= j):
      return arr
    else:
      mid = i + (j - i) / 2
      arr = self.mergeSort(arr, n, i, mid)
      arr = self.mergrSort(arr, n, mid + 1, j)
      return self.mergeSortAux(arr, i, j)

