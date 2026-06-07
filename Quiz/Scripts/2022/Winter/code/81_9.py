try:
    for c in range(-5, -13, -2):
        if c > -9:
            continue
            print(c, end=' ')
        if c >= -8:
            break
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
