def camel_case(s):
    wordsList = s.split()
    
    for i in range(len(wordsList)):
        wordsList[i] = wordsList[i].capitalize()
        
    return "".join(wordsList)