def countzero(st):
    return sum([1 if ch in 'abdegopq069DOPQR' else 2 if ch in '%&B8' else 0 for ch in st]) + st.count('()')