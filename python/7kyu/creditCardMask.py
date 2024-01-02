# return masked string
def maskify(cc):
    return "#"*(len(cc)-4) + cc[len(cc) - 4 : len(cc)] if len(cc) > 4 else cc