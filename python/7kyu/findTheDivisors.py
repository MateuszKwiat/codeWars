def divisors(integer):
    arr = []
    for i in range(2, int(integer/2) + 1):
        if integer % i == 0:
            arr.append(i)
    
    return f"{integer} is prime" if len(arr) == 0 else arr