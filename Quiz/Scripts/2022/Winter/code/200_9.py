try:
    for c in range(6, 16, 3):
        if c > 11:
            continue
            print(c, end=' ')
        else:
            print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
