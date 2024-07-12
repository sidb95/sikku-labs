def __main__():
  f = open('alphabets.txt', 'w')
  for i in range(0, 26):
    f.write(chr(ord('A') + i))
    f.write(' ')
  f.close()
  return

__main__()
