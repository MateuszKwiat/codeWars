def good_vs_evil(good, evil):
    goodValues = [1, 2, 3, 3, 4, 10]
    evilValues = [1, 2, 2, 2, 3, 5, 10]
    
    goodSum = sum([int(i)*j for i, j in zip(good.split(), goodValues)])
    evilSum = sum([int(i)*j for i, j in zip(evil.split(), evilValues)])
    
    if goodSum > evilSum:
        return "Battle Result: Good triumphs over Evil"
    elif goodSum < evilSum:
        return "Battle Result: Evil eradicates all trace of Good"
    else:
        return "Battle Result: No victor on this battle field"
