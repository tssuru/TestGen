try:
    for d in range(5, 3, -1):
        if d <= 4:
            continue
            print(d, end=' ')
            d = 3
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
