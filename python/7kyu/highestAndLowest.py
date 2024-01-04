def high_and_low(numbers):
    numList = numbers.split()
    numList = [int(x) for x in numList]
    
    return f"{max(numList)} {min(numList)}"