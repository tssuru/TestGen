try:
    for d in range(-6, -12, -2):
        if d > -9:
            continue
            print(d, end=' ')
            d = -10
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
