try:
    for b in range(-1, -3, -1):
        if b < -2:
            continue
            print(b, end=' ')
            b = -3
        if b <= -1:
            break
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
