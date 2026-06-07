try:
    for d in range(9, 7, -1):
        if d < 8:
            continue
            print(d, end=' ')
            d = 7
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
