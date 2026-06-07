try:
    for f in range(2, 14, 3):
        if f >= 8:
            continue
            print(f, end=' ')
            f = 7
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
