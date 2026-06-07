try:
    for b in range(-9, -4, 2):
        if b < -7:
            break
            print(b, end=' ')
            b = -8
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
