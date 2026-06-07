try:
    for e in range(-8, -2, 2):
        if e < -5:
            continue
            print(e, end=' ')
            e = -6
        else:
            print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
