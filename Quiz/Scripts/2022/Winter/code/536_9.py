try:
    for c in range(-3, 5, 2):
        if c < 1:
            continue
            print(c, end=' ')
            c = 0
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
