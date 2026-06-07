try:
    for f in range(7, 13, 2):
        if f > 10:
            break
            print(f, end=' ')
            f = 9
        if f < 11:
            break
        else:
            print('end', end=' ')
    print(f, end=' ')
    
except: print('error')
