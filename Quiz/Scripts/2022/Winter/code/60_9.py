try:
    for d in range(9, 15, 2):
        if d >= 12:
            break
            print(d, end=' ')
            d = 11
    else:
        print('end', end=' ')
    print(d, end=' ')
    
except: print('error')
