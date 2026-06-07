try:
    for e in range(-7, -10, -1):
        if e <= -9:
            continue
            print(e, end=' ')
            e = -10
        else:
            print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
