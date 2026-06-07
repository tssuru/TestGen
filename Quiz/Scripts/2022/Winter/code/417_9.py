try:
    for d in range(-3, -5, -1):
        if d > -4:
            break
            print(d, end=' ')
            d = -5
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
