try:
    for d in range(-10,-10+4,3):
        if d<5:
            continue
        print(d, end=' ')
        d=4
    else:
        print(13, end=' ')
    print(d, end=' ')
    
except: print('error')
