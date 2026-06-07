try:
    for c in range(7, 0, -2):
        if c <= 3:
            continue
            print(c, end=' ')
            c = 2
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
