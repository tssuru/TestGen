try:
    for c in range(4,4+5,2):
        if c<=6:
            continue
        print(c, end=' ')
        c=6
    else:
        print(13, end=' ')
    print(c, end=' ')
    
except: print('error')
