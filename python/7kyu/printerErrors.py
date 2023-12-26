def printer_error(s):
    badChars = "nopqrstuvwxyz"
    countOfBadChars = 0
    for x in s:
        if x in badChars:
            countOfBadChars += 1
            
    return str(countOfBadChars) + '/' + str(len(s))