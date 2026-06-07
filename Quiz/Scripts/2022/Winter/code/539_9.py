try:
    for f in range(9, 7, -1):
        if f > 8:
            continue
            print(f, end=' ')
            f = 7
        else:
            print('end', end=' ')
    print(f, end=' ')
    
except: print('error')
