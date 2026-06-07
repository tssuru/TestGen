try:
    for b in range(7, 0, -2):
        if b <= 3:
            continue
            print(b, end=' ')
            b = 2
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
