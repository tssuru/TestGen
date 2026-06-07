try:
    for c in range(8, 12, 2):
        if c < 10:
            continue
            print(c, end=' ')
            c = 9
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
