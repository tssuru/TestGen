try:
    for d in range(-9, -11, -1):
        if d <= -10:
            continue
            print(d, end=' ')
            d = -11
        if d >= -9:
            break
    else:
        print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
