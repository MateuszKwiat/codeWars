import numpy as np

def xo(s):
    arr = np.array([list(str.lower(char)) for char in s])
    ohs = np.count_nonzero(arr == 'o')
    exes = np.count_nonzero(arr == 'x')
    return exes == ohs