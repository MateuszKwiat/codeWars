def in_array(array1, array2):
    result = []
    
    for word1 in array1:
        for word2 in array2:
            if word1 in word2:
                result.append(word1)
                break
                
    return sorted(list(set(result)))