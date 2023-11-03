def sum_str(a, b):
    if not a.isnumeric() and not b.isnumeric():
        return "0"
    if not a.isnumeric():
        return b
    if not b.isnumeric():
        return a
    return str(int(a) + int(b))