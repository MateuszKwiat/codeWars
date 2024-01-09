def sort_by_length(arr):
    wordsDict = {}
    
    for word in arr:
        wordsDict[word] = len(word)
        
    return list(dict(sorted(wordsDict.items(), key=lambda item: item[1])))