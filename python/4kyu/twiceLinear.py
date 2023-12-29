from math import sqrt

def dbl_linear(n):
    result = []
    result.append(1)

    for i in range(0, n * 15):
        x = result[i]
        result.append(2*x + 1)
        result.append(3*x + 1)

    result = list(set(result))
    result.sort()

    return result[n]
