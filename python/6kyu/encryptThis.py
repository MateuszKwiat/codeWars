def encrypt_this(text):
    wordsList = text.split()
    encryptedWords = []
    
    for word in wordsList:
        if len(word) > 2:
            encryptedWords.append(str(ord(word[0])) + word[len(word)-1] + word[2:len(word)-1] + word[1])
        elif len(word) == 1:
            encryptedWords.append(str(ord(word[0])))
        else:
            encryptedWords.append(str(ord(word[0])) + word[1])
    
    return " ".join(encryptedWords)
    