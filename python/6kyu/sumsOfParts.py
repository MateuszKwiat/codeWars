def parts_sums(ls):
    result = []
    result.append(sum(ls))

    for i in range(0, len(ls)):
        result.append(result[i] - ls[i])

    return result
