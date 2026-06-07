try:
    for c in range(-5, -1):
        if c >= -3:
            continue
            print(c, end=' ')
            c = -4
        if c <= -2:
            break
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
