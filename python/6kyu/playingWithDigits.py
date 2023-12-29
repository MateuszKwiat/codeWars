def dig_pow(n, p):
    digits = str(n)
    sum = 0
    
    for digit in digits:
        sum += int(digit)**p
        p += 1
    
    k = int(sum/n)
    
    return k if n * k == sum else -1