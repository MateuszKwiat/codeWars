def magic_sum(arr):
    sum = 0
    
    for num in arr:
        if "3" in str(num) and num % 2 != 0:
            sum += num
            
    return sum