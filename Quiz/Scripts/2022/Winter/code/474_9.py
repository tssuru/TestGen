try:
    for c in range(-8, -12, -2):
        if c < -10:
            continue
            print(c, end=' ')
            c = -11
        else:
            print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
