try:
    for c in range(2, 10, 2):
        if c <= 6:
            continue
            print(c, end=' ')
            c = 5
        if c < 7:
            break
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
