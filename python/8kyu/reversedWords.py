def reverse_words(s):
    listOfStrings = s.split()
    result = ""
    
    for i in range(len(listOfStrings) - 1, -1, -1):
        result += listOfStrings[i] + " " 
    
    return result[0:len(result) - 1]