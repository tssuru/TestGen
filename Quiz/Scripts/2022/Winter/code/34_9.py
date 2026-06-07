try:
    for f in range(6, 3, -1):
        if f < 4:
            continue
            print(f, end=' ')
            f = 3
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
