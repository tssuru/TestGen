try:
    for f in range(-3, -5):
        if f >= -4:
            continue
            print(f, end=' ')
            f = -5
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
