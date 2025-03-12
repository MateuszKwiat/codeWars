def tribonacci(signature, n):
    seq = signature[:n]
    seq.extend(sum(seq[-3:]) for i in range(3, n))

    return seq