try:
    for b in range(1, 7, 3):
        if b >= 4:
            continue
            print(b, end=' ')
            b = 3
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
