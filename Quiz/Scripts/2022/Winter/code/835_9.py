try:
    for c in range(-6, 3, 3):
        if c >= -2:
            continue
            print(c, end=' ')
        if c <= -1:
            break
        else:
            print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
