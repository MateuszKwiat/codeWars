def neutralise(s1, s2):
    newStr = ""
    for i, j in zip(s1, s2):
        if i == j:
            newStr += i
        else:
            newStr += '0'
            
    return newStr