def averages(arr):
    if arr is None or len(arr) < 2 :
        return []
    
    return [(arr[i] + arr[i+1])/2 for i in range(0, len(arr)-1)]