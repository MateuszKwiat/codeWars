def to_weird_case(words):
    result = ""
    i = 0
    for word in words.split():
        for char in word:
            if i % 2 == 0:
                result += char.upper()
            else:
                result += char.lower()
            
            i += 1
        
        result += " "
        i = 0
        

    return result[:len(result) - 1]