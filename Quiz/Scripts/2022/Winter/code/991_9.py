try:
    for c in range(-6, -1, 2):
        if c < -4:
            continue
            print(c, end=' ')
            c = -5
        if c > -3:
            break
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
