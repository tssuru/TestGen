try:
    for c in range(0, 7, 2):
        if c <= 3:
            break
            print(c, end=' ')
        else:
            print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
