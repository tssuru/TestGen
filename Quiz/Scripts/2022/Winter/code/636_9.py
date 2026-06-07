try:
    for b in range(3, -2, -2):
        if b > 0:
            continue
            print(b, end=' ')
            b = -1
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
