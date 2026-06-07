try:
    for d in range(0, 3, -1):
        if d > 1:
            break
            print(d, end=' ')
            d = 0
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
