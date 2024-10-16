"""
gcd.py
sidb95 
bhatoresiddharth@gmail.com 
08 August 2024
"""

def gcd(a: int, b: int) -> int:
    if (a == 0):
        return b
    else:
        return gcd(b, a % b)

