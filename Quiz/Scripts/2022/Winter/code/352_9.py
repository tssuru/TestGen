try:
    for f in range(-4, 3, 2):
        if f >= -1:
            continue
            print(f, end=' ')
            f = -2
        if f > 0:
            break
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
