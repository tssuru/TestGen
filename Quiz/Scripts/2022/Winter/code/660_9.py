try:
    for c in range(7, 4, -1):
        if c < 5:
            continue
            print(c, end=' ')
            c = 4
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
