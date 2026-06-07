try:
    for f in range(-3, 4, 2):
        if f >= 0:
            continue
            print(f, end=' ')
            f = -1
    else:
        print('end', end=' ')
    print(f, end=' ')
    
except: print('error')
