try:
    for f in range(-2, 3, 2):
        if f >= 0:
            continue
            print(f, end=' ')
            f = -1
        if f > 1:
            break
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
