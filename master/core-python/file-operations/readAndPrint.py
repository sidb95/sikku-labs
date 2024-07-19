"""
readAndPrint.py
sidb95
bhatoresiddharth@gmail.com 
18 July 2024
"""
import time

class Solution:
  def __init__(self):
    pass

  def readAndPrint(self, filename):
    f = open(filename, 'r')
    line = f.readline()
    while (line != ""):
      print(line)
      line = f.readline()
    f.close()
    print('\n')
    return

def __main__():
  S = Solution()
  start = time.time()
  S.readAndPrint("gibberish_1.txt")
  end = time.time()
  print(end - start)
  return

__main__()
