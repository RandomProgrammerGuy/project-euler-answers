# PROJECT EULER PROBLEM 3 - SOLUTION BY PARSA FARJAM
from math import sqrt, floor

num = floor(sqrt(600851475143)) - 1

def is_prime(x):
    "THIS FUNCTION CHECKS IF x IS PRIME. IT DOES NOT CHECK IF IT IS PAIR, AS x IS ASSUMED NON-PAIR DUE TO HOW THE ALGORITHM IS STRUCTURED."
    for i in range(3, floor(x/2), 2):
        if x % i == 0:
            return False
    return True

while (num >= 3) :
    if (600851475143 % num == 0) :
        if (is_prime(num)) :
            print(num)
            quit()
    num -= 2