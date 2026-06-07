try:
    for b in range(-1, 7, 3):
        if b < 3:
            break
            print(b, end=' ')
            b = 2
        if b >= 4:
            break
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
