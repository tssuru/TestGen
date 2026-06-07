try:
    for f in range(-7, 0, 3):
        if f < -4:
            break
            print(f, end=' ')
            f = -5
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
