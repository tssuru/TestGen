try:
    for c in range(1, 4):
        if c > 2:
            continue
            print(c, end=' ')
            c = 1
        else:
            print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
