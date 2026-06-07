try:
    for c in range(9, 3, -2):
        if c < 6:
            continue
            print(c, end=' ')
            c = 5
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
