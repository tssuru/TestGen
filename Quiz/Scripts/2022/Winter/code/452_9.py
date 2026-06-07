try:
    for d in range(-1, -4, -1):
        if d < -3:
            break
            print(d, end=' ')
            d = -4
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
