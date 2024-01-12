def mySort(arr):
    swapped = False
    for i in range(len(arr) - 1):
        for j in range(0, len(arr) -i - 1):
            if len(arr[j]) < len(arr[j+1]):
                swapped = True
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
            elif len(arr[j]) == len(arr[j+1]):
                if arr[j] > arr[j+1]:
                    swapped = True
                    temp = arr[j]
                    arr[j] = arr[j+1]
                    arr[j+1] = temp
        
        if not swapped:
            return

def mix(s1, s2):
    letterInStringOccurrence = {}
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    result = ""

    for letter in alphabet:
        if letter in s1 or letter in s2:
            s1Count = s1.count(letter)
            s2Count = s2.count(letter)
            key = ""
            if s1Count == s2Count:
                key += "=:"
            elif s1Count > s2Count:
                key += "1:"
            else:
                key += "2:"

            letterInStringOccurrence[key + letter] = max(s1Count, s2Count)
    
    resultList = []
    for key in letterInStringOccurrence.keys():
        if letterInStringOccurrence[key] > 1:
            resultList.append(f"{key}{key[len(key)-1]*(letterInStringOccurrence[key]-1)}/")

    mySort(resultList)
    result = "".join(resultList)

    return result[:len(result)-1]