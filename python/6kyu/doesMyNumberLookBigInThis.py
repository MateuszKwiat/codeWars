def narcissistic( value ):
    power = len(str(value))
    valueCopy = value
    sum = 0

    while valueCopy > 0:
        sum += (valueCopy%10)**power
        valueCopy = str(valueCopy)
        valueCopy = int(valueCopy[:len(valueCopy)-1]) if len(valueCopy) > 1 else int(0)

    return sum == value
