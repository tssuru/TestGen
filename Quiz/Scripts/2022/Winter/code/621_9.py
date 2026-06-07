try:
    for c in range(-4, 5, 3):
        if c > 0:
            continue
            print(c, end=' ')
            c = -1
    else:
        print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
