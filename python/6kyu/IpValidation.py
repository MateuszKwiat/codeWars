def is_valid_IP(strng):
    octets = strng.split('.')
    
    if len(octets) != 4:
        return False
    
    for octet in octets:
        if not octet.isnumeric() or (octet[0] == '0' and len(octet) > 1):
            return False
        elif (int(octet) >= 0 and int(octet) <= 255):
            continue
        else:
            return False
            
    return True
        
    