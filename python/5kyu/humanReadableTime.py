def make_readable(seconds):
    hours = str(int(seconds/3600))    
    seconds = seconds - 3600*int(hours)
    
    if len(hours) < 2:
        hours = "0" + hours
    
    minutes = str(int(seconds/60))
    seconds = seconds - 60*int(minutes)

    if len(minutes) < 2:
        minutes = "0" + minutes
    
    seconds = str(seconds)
    if len(seconds) < 2:
        seconds = "0" + seconds
    
    return f"{hours}:{minutes}:{seconds}"
    