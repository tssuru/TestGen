try:
    for b in range(4, 0, -2):
        if b < 2:
            continue
            print(b, end=' ')
            b = 1
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
