try:
    for d in range(1, 5):
        if d >= 3:
            continue
            print(d, end=' ')
            d = 2
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
