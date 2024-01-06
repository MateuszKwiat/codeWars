def array(string):
    numList = string.split(",")
    if len(numList) <= 2:
        return None
    
    return " ".join(numList[1:len(numList)-1])