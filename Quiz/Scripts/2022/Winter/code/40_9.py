try:
    for c in range(7, 3, -1):
        if c <= 5:
            continue
            print(c, end=' ')
        if c <= 6:
            break
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
