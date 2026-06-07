try:
    for c in range(7, 9):
        if c <= 8:
            continue
            print(c, end=' ')
            c = 7
        if c <= 9:
            break
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
