try:
    for e in range(-7, 0, 2):
        if e < -4:
            continue
            print(e, end=' ')
            e = -5
        else:
            print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
