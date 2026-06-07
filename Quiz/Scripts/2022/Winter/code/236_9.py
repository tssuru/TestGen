try:
    for c in range(-3, 1):
        if c >= -1:
            break
            print(c, end=' ')
            c = -2
        if c < 0:
            break
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
