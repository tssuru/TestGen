try:
    for c in range(-3, -6, -1):
        if c < -5:
            continue
            print(c, end=' ')
            c = -6
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
