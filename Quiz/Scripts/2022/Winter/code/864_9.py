try:
    for f in range(2, 12, 3):
        if f > 7:
            continue
            print(f, end=' ')
            f = 6
        else:
            print('end', end=' ')
    print(f, end=' ')
    
except: print('error')
