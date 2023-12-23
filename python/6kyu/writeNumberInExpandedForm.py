def expanded_form(num):
    i = 10
    result = ""
    while i <= num:
        newVal = num % i
        if newVal > 0:
            result = str(newVal) + " + " + result
            num = num - (newVal)
        i *= 10
    result = str(num % i) + " + " + result
        
    return result[0:len(result) - 3]
