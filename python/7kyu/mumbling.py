def accum(s):
    result = s[0]
    for i in range(1, len(s)):
        result += f"-{s[i].upper()}{s[i].lower()*i}"
        
    return result
    