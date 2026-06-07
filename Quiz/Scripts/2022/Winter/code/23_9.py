try:
    for e in range(2, -1, -1):
        if e <= 0:
            continue
            print(e, end=' ')
            e = -1
        else:
            print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
