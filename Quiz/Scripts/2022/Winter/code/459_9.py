try:
    for d in range(2):
        if d <= 1:
            continue
            print(d, end=' ')
            d = 0
    else:
        print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
