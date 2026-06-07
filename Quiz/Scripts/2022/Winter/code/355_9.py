try:
    for c in range(-2, -7, -2):
        if c <= -5:
            continue
            print(c, end=' ')
            c = -6
        else:
            print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
