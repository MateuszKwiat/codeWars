def stringy(size):
    result = ""
    
    for i in range(size):
        result += ("1" if i % 2 == 0 else "0")
        
    return result