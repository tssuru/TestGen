try:
    for f in range(-9, -6):
        if f < -8:
            continue
            print(f, end=' ')
            f = -9
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
