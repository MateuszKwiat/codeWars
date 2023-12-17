def duplicate_count(text):
    text = text.lower()
    dict = {'':0}
    for i in text:
        if i in dict.keys():
            dict[i] += 1
        else:
            dict[i] = 0

    moreThanTwice = 0
    arr = list(dict.values())
    for i in arr:
        if i > 0:
            moreThanTwice += 1
            
    return moreThanTwice