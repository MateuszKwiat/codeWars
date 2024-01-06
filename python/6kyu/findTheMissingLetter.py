def find_missing_letter(chars):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    missingLetter = ""
    
    if chars[0].isupper():
        alphabet = alphabet.upper()
    
    for i in range(alphabet.index(chars[0]), len(alphabet)):
        if alphabet[i] not in chars:
            return alphabet[i] 
        
    return 0
    
