def binary_array_to_number(arr):
    num = 0
    power = len(arr) - 1
    for i in arr:
        num += i*pow(2,power)
        power -= 1
        
    return num