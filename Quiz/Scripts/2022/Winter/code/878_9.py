try:
    for d in range(-4, 8, 3):
        if d <= 2:
            continue
            print(d, end=' ')
            d = 1
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
