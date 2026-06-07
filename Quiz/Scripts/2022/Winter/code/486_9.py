try:
    for e in range(6, 2, -1):
        if e <= 4:
            continue
            print(e, end=' ')
            e = 3
        else:
            print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
