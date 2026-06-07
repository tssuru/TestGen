try:
    for f in range(-4, 7, 3):
        if f < 1:
            break
            print(f, end=' ')
            f = 0
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
