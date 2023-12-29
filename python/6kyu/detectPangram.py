def is_pangram(s):
    alphabet = [chr(char) for char in range(ord('a'), ord('z') + 1)]
    
    s = s.lower()
    for char in alphabet:
        if char not in s:
            return False
        
    return True
