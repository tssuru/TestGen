try:
    for c in range(13, 7, 3):
        if c >= 10:
            continue
            print(c, end=' ')
            c = 9
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
