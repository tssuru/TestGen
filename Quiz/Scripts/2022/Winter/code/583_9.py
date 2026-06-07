try:
    for b in range(-2, 9, 3):
        if b < 3:
            continue
            print(b, end=' ')
            b = 2
        if b >= 4:
            break
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
