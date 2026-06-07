try:
    for c in range(-4, 2, 2):
        if c > -1:
            continue
            print(c, end=' ')
        if c <= 0:
            break
        else:
            print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
