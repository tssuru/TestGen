try:
    for c in range(-7, -11, -2):
        if c < -9:
            continue
            print(c, end=' ')
            c = -10
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
