try:
    for c in range(5, 7):
        if c < 6:
            continue
            print(c, end=' ')
    else:
        print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
