try:
    for b in range(-5, -8, -1):
        if b >= -7:
            continue
            print(b, end=' ')
            b = -8
        if b < -6:
            break
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
