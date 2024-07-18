"""
generateGibberish.py
sidb95 
bhatoresiddharth@gmail.com 
16 July 2024
"""

import random

word_length = [332, 332]
limit = [2, 7]

S = (
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n'
, 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
)

def __main__():
  sentence = []
  sLength = random.randint(word_length[0], word_length[1])
  print(sLength)
  for i in range(0, sLength):
    word = []
    size1 = random.randint(limit[0], limit[1])
    for i in range(0, size1):
      j = random.randint(0, 25)
      word.append(S[j])
    word.append(' ')
    sentence += word
  print(len(sentence))
  f = open('gibberish_1.txt', 'w')
  f.write(str(sentence))    
  f.close()

__main__()
