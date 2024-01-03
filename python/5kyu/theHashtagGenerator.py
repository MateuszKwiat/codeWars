def generate_hashtag(s):
    if s == "":
        return False
    
    wordsList = s.split()
    result = "#"
    
    for x in wordsList:
        result += x.capitalize()
        
    return result if len(result) <= 140 else False