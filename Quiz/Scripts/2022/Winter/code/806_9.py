try:
    for b in range(-6, -14, -2):
        if b >= -10:
            break
            print(b, end=' ')
            b = -11
        if b < -9:
            break
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
