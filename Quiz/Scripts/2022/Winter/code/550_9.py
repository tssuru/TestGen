try:
    for c in range(-3, -11, -2):
        if c > -7:
            continue
            print(c, end=' ')
            c = -8
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
