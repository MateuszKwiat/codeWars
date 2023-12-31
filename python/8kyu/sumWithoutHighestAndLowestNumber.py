def sum_array(arr):
    return sum(arr) - max(arr) - min(arr) if arr is not None and len(arr) > 1 else 0