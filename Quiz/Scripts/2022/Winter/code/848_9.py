try:
    for f in range(-1, -6, -2):
        if f <= -4:
            continue
            print(f, end=' ')
            f = -5
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
