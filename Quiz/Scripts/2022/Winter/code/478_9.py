try:
    for c in range(15, 7, 2):
        if c >= 11:
            continue
            print(c, end=' ')
        if c < 12:
            break
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
