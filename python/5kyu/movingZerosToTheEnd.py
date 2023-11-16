def move_zeros(lst):
    for i in range(1, len(lst)):
        for j in range(1, len(lst)):
            if lst[j - 1] == 0:
                temp = lst[j - 1]
                lst[j - 1] = lst[j]
                lst[j] = temp
    return lst
