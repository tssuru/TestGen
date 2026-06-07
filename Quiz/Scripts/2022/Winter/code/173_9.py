try:
    for f in range(-1, 6, 3):
        if f < 2:
            continue
            print(f, end=' ')
            f = 1
        if f > 3:
            break
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
