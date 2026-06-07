try:
    for c in range(-5,-5+3,-3):
        if c<=5:
            break
        print(c, end=' ')
        c=-9
    else:
        print(13, end=' ')
    print(c, end=' ')
    
except: print('error')
