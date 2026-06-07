try:
    for c in range(-4, -8, -2):
        if c >= -6:
            continue
            print(c, end=' ')
            c = -7
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
