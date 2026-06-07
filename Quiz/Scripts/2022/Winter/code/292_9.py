try:
    for d in range(3, 11, 3):
        if d >= 7:
            break
            print(d, end=' ')
            d = 6
        if d >= 8:
            break
        else:
            print('end', end=' ')
    print(d, end=' ')
    
except: print('error')
