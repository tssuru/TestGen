try:
    for c in range(3, -3, 2):
        if c <= 0:
            continue
            print(c, end=' ')
        if c >= 1:
            break
        else:
            print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
