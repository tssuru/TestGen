try:
    for d in range(2, 4):
        if d <= 3:
            continue
            print(d, end=' ')
            d = 2
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
