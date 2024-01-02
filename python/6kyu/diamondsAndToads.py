def diamonds_and_toads(sentence, fairy):
    result = {}
    
    if fairy == "good":
        countValue = sentence.count('r') + sentence.count('R')*2
        result['ruby'] = countValue 
        
        countValue = sentence.count('c') + sentence.count('C')*2
        result['crystal'] = countValue
        
    else:
        countValue = sentence.count('p') + sentence.count('P')*2
        result['python'] = countValue
        
        countValue = sentence.count('s') + sentence.count('S')*2
        result['squirrel'] = countValue
        
    return result