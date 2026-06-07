try:
    for f in range(-6, -1, 2):
        if f >= -4:
            continue
            print(f, end=' ')
            f = -5
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
