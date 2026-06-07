try:
    for e in range(-8, -15, -2):
        if e < -12:
            continue
            print(e, end=' ')
            e = -13
        else:
            print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
