try:
    for c in range(8, 2, -2):
        if c < 5:
            break
            print(c, end=' ')
            c = 4
        if c < 6:
            break
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
