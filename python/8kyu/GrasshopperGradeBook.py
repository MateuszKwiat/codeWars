def get_grade(s1, s2, s3):
    score = int((s1 + s2 + s3) / 3)
    if score in range(90, 101):
        return 'A'
    elif score in range(80, 90):
        return 'B'
    elif score in range(70, 80):
        return 'C'
    elif score in range(60, 70):
        return 'D'
    else:
        return "F"
    