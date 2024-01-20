def add_length(str_):
    wordList = str_.split()
    
    for i in range(len(wordList)):
        wordList[i] += f" {len(wordList[i])}"
        
    return wordList