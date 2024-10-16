"""
isPrime.py
sidb95 
bhatoresiddharth@gmail.com 
08 August 2024
"""


import math

S = {}

def isPrime(n: int) ->bool:
    if (n == 1):
        return False
    elif (n == 2):
        return True
    elif (n % 2 == 0):
        return False
    else:
        num1 = int(math.sqrt(n))
        for i in range(3, num1 + 1, 2):
            if (i in S):
                return False
            else:
                if (n % i == 0):
                    return False
                j = i * 2
                while (j <= num1):
                    S[j] = True
                    j += i
                #
            #
        #
        return True
    #

def __main__():
    n = int(input())
    if (isPrime(n)):
        print("YES")
    else:
        print("NO")
    return

__main__()
