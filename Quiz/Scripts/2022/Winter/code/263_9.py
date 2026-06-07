try:
    for e in range(-4, -7, -1):
        if e < -6:
            continue
            print(e, end=' ')
            e = -7
        else:
            print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
