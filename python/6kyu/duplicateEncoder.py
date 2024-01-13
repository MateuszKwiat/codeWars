def duplicate_encode(word):
    word = word.lower()
    result = ""
    
    for ch in word:
        result += ("(" if word.count(ch) == 1 else ")")
        
    return result