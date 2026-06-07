try:
    for f in range(0, 4, -1):
        if f >= 2:
            continue
            print(f, end=' ')
        else:
            print('end', end=' ')
    print(f, end=' ')
    
except: print('error')
