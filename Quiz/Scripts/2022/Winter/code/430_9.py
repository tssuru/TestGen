try:
    for e in range(-1, 4, 2):
        if e >= 1:
            continue
            print(e, end=' ')
            e = 0
        else:
            print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
