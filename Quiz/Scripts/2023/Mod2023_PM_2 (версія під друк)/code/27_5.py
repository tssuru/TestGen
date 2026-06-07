try:
    for c in range(-2,-2+3,2):
        if c<=8:
            continue
        print(c, end=' ')
        c=-3
    else:
        print(13, end=' ')
    print(c, end=' ')
    
except: print('error')
