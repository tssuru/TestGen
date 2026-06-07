try:
    for f in range(3, 0, -1):
        if f > 1:
            continue
            print(f, end=' ')
            f = 0
    else:
        print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
