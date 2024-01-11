def pig_it(text):
    wordsList = text.split()
    resultList = []
    
    for word in wordsList:
        if word.isalpha():
            resultList.append(word[1:len(word)] + word[0] + "ay")
        else:
            resultList.append(word)
            
    return " ".join(resultList)