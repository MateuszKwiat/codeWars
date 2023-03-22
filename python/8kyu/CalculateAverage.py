# Write a function which calculates the average of the numbers in a given list.

# Note: Empty arrays should return 0.

def find_average(numbers):
    Sum = sum(numbers)
    if Sum == 0:
        return 0
    return Sum / len(numbers)