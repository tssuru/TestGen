try:
    for c in range(-1, 11, 3):
        if c >= 5:
            continue
            print(c, end=' ')
        else:
            print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
