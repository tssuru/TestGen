try:
    for b in range(6, 13, 2):
        if b < 9:
            continue
            print(b, end=' ')
            b = 8
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
