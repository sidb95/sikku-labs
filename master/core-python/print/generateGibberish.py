import random

word_length = [100, 200]
limit = [2, 7]

S = (
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n'
, 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
)

def __main__():
  sentence = ""
  sLength = random.randint(word_length[0], word_length[1])
  print(sLength)
  for i in range(0, sLength):
    word = ""
    size1 = random.randint(limit[0], limit[1])
    for i in range(0, size1):
      j = random.randint(0, 25)
      word += S[j]
    sentence += word + ' '
  print(len(sentence))
  f = open('gibberish_1.txt', 'w')
  f.write(sentence)
  f.close()

__main__()
