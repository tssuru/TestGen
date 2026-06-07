try:
    for d in range(0, -8, -2):
        if d < -4:
            break
            print(d, end=' ')
            d = -5
        if d > -3:
            break
    else:
        print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
