try:
    for d in range(-8, -2, 3):
        if d > -5:
            continue
            print(d, end=' ')
            d = -6
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
