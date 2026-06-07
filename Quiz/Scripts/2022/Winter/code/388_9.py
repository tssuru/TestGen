try:
    for c in range(1, -3, -2):
        if c >= -1:
            continue
            print(c, end=' ')
        if c < 0:
            break
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
