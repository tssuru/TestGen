try:
    for c in range(-10,-10+5,-3):
        if c<=5:
            pass
        print(c, end=' ')
        c=6
        if c<=6:
            break
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
