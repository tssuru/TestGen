try:
    for c in range(-3,-3+5,-2):
        if c<6:
            break
        print(c, end=' ')
        c=-7
        if c>7:
            break
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
