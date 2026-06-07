try:
    for d in range(1, 9, 3):
        if d <= 5:
            continue
            print(d, end=' ')
            d = 4
        else:
            print('end', end=' ')
    print(d, end=' ')
    
except: print('error')
