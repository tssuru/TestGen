try:
    for d in range(-9, -12, -1):
        if d >= -11:
            continue
            print(d, end=' ')
            d = -12
        if d > -10:
            break
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
