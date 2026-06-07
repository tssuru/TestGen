try:
    for d in range(2, -1, -1):
        if d <= 0:
            continue
            print(d, end=' ')
            d = -1
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
