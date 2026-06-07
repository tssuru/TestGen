try:
    for f in range(8, 14, 3):
        if f > 11:
            continue
            print(f, end=' ')
            f = 10
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
