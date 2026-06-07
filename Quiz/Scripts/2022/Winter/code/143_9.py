try:
    for c in range(-8, -10, -1):
        if c >= -9:
            continue
            print(c, end=' ')
            c = -10
        else:
            print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
