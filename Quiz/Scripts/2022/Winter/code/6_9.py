try:
    for c in range(4, 10, 3):
        if c <= 7:
            continue
            print(c, end=' ')
        else:
            print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
