try:
    for c in range(-6, 0, 2):
        if c >= -3:
            continue
            print(c, end=' ')
            c = -4
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
