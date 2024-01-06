from math import sqrt

def is_prime(num):
    if num == 2:
        return True
    
    if num % 2 == 0 or num == 1 or num <= 0:
        return False
    
    upperBound = sqrt(num)
    i = 3
    
    while i <= upperBound:
        if num % i == 0:
            return False
        
        i += 1
        
    return True
    