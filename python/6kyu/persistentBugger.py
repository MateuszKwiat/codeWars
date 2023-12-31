def persistence(n):
    multiplicativePersistence = 0
    n = str(n)
    digitsMultiply = 1
    while len(n) > 1:
        for i in n:
            digitsMultiply *= int(i)
            
        n = str(digitsMultiply)
        multiplicativePersistence += 1
        digitsMultiply = 1
        
    return multiplicativePersistence
