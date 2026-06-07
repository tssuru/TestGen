try:
    for d in range(5, 13, 2):
        if d >= 9:
            continue
            print(d, end=' ')
            d = 8
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
