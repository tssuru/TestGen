try:
    for c in range(2, 10, 3):
        if c > 6:
            continue
            print(c, end=' ')
        if c <= 7:
            break
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
