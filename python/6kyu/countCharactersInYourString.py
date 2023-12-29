def count(s):
    charsDict = {}
    for i in s:
        if i in charsDict:
            charsDict[i] += 1
        else:
            charsDict[i] = 1
    
    return charsDict