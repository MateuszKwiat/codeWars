def get_count(sentence):
    vowels = "aeiou"
    count = 0
    
    for ch in sentence:
        count += (ch in vowels)
        
    return count