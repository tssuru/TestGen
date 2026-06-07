try:
    for b in range(-9, -12, -1):
        if b < -11:
            break
            print(b, end=' ')
            b = -12
        if b > -10:
            break
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
