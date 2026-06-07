try:
    for d in range(-6, -2):
        if d < -4:
            continue
            print(d, end=' ')
            d = -5
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
