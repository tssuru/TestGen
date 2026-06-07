try:
    for b in range(0, -4, -1):
        if b < -2:
            continue
            print(b, end=' ')
            b = -3
        else:
            print('end', end=' ')
    print(b, end=' ')
    
except: print('error')
