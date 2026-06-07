try:
    for c in range(-10,-10+6,2):
        if c>7:
            pass
        print(c, end=' ')
        c=-3
        if c<6:
            break
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
