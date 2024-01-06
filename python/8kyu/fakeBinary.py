def fake_bin(x):
    result = ""
    for char in x:
        result += "0" if int(char) < 5 else "1"
        
    return result