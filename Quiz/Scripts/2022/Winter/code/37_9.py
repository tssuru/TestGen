try:
    for b in range(0, 2, -1):
        if b >= 1:
            break
            print(b, end=' ')
            b = 0
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
