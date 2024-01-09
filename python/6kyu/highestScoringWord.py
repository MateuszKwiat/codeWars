def high(x):
    wordsList = x.split()
    wordsDict = {}
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    maxScoreWord = wordsList[0]
    
    for word in wordsList:
        score = 0
        for char in word:
            score += alphabet.index(char) + 1

        wordsDict[word] = score
        if wordsDict[word] > wordsDict[maxScoreWord]:
            maxScoreWord = word

    return maxScoreWord
    