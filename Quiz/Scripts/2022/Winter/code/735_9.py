try:
    for f in range(-5, 5, 3):
        if f < 0:
            continue
            print(f, end=' ')
            f = -1
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
