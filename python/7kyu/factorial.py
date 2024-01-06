def factorial(n):
    if n <= 0:
        return 1
    
    result = n
    
    for i in range(n-1, 1, -1):
        result *= i
        
    return result