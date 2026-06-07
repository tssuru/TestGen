try:
    for c in range(-4, 2, 3):
        if c > -1:
            continue
            print(c, end=' ')
            c = -2
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
