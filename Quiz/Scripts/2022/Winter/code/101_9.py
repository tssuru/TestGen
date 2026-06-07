try:
    for f in range(-7, -5):
        if f < -6:
            break
            print(f, end=' ')
            f = -7
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
