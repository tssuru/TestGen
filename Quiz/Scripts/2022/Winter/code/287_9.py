try:
    for c in range(9, 18, 3):
        if c < 13:
            continue
            print(c, end=' ')
            c = 12
        if c > 14:
            break
        else:
            print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
