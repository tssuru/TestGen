try:
    for c in range(5, 14, 3):
        if c < 9:
            continue
            print(c, end=' ')
    else:
        print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
