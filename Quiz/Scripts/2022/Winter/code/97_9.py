try:
    for b in range(-9, -15, -2):
        if b < -12:
            continue
            print(b, end=' ')
            b = -13
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
