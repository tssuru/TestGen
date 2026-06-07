try:
    for b in range(1, -3, -2):
        if b < -1:
            continue
            print(b, end=' ')
            b = -2
        else:
            print('end', end=' ')
    print(b, end=' ')
    
except: print('error')
