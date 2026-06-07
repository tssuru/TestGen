try:
    for c in range(5,5+6,2):
        if c>8:
            continue
        print(c, end=' ')
        c=7
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
