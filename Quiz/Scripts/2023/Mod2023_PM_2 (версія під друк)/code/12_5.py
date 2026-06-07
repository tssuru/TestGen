try:
    for c in range(-8,-8+2,2):
        if c<=3:
            continue
        print(c, end=' ')
        c=-9
        if c<=8:
            break
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
