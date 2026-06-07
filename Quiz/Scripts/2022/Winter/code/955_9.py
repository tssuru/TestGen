try:
    for f in range(-3, -6, -1):
        if f < -5:
            break
            print(f, end=' ')
            f = -6
        if f > -4:
            break
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
