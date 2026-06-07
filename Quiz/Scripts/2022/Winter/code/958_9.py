try:
    for c in range(-2, -8, -2):
        if c >= -5:
            continue
            print(c, end=' ')
            c = -6
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
