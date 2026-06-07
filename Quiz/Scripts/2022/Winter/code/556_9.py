try:
    for c in range(-9, -13, -1):
        if c <= -11:
            continue
            print(c, end=' ')
        if c < -10:
            break
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
