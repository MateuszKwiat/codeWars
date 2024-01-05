def to_jaden_case(string):
    listOfStrings = string.split()
    result = ""
    
    for i in listOfStrings:
        result += i.capitalize() + " "
        
    return result[0:len(result) - 1]