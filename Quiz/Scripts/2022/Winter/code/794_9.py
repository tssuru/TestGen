try:
    for c in range(2, 7, -2):
        if c <= 4:
            break
            print(c, end=' ')
            c = 3
        else:
            print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
