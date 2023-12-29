def solution(args):
    result = ""
    result += str(args[0])
    i = 1
    consecutiveCount = 0
    
    while i < len(args):
        if args[i] == args[i-1] + 1:
            while i < len(args) and args[i] == args[i-1] + 1:
                i += 1
                consecutiveCount += 1
                
            result += "-" if consecutiveCount > 1 else ","
            result += str(args[i-1])
            
        if i < len(args):
            result += f",{args[i]}"

        i += 1
        consecutiveCount = 0

    return result