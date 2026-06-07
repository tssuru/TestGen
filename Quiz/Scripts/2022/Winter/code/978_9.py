try:
    for c in range(5, 9, 2):
        if c > 7:
            continue
            print(c, end=' ')
        else:
            print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
