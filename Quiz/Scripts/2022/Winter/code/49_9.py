try:
    for f in range(3, 0, -1):
        if f >= 1:
            continue
            print(f, end=' ')
        if f < 2:
            break
        else:
            print('end', end=' ')
    print(f, end=' ')
    
except: print('error')
