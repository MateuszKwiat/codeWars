def solution(s):
    i = 0
    while i < len(s):
        print(f"{s} : {i}")
        if s[i].isupper():
            s = s[:i] + ' ' + s[i:]
            i += 1
        i += 1  
    return s
