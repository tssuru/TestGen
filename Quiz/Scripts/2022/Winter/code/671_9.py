try:
    for c in range(3, 11, 3):
        if c >= 7:
            continue
            print(c, end=' ')
            c = 6
    else:
        print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
