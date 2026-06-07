try:
    for d in range(-8, -11, -1):
        if d <= -10:
            continue
            print(d, end=' ')
            d = -11
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
