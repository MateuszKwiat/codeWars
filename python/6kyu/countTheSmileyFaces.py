def count_smileys(arr):
    count = 0
    for i in arr:
        if (':' in i or ';' in i) and ('D' in i or ')' in i):
            if len(i) == 2:
                count += 1
            if len(i) == 3 and ('-' in i or '~' in i): 
                count += 1
    return count