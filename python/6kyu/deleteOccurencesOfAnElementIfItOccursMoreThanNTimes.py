def delete_nth(order,max_e):
    result = []
    dictOfNums = {}
    
    for x in order:
        if dictOfNums.get(x) is not None:
            dictOfNums[x] += 1
        else:
            dictOfNums[x] = 1
            
        if dictOfNums[x] <= max_e:
            result.append(x)
            
    return result