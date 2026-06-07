try:
    for b in range(-2, 5, 2):
        if b > 1:
            continue
            print(b, end=' ')
            b = 0
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
