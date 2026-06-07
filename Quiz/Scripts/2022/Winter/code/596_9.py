try:
    for d in range(7, 14, 3):
        if d >= 10:
            break
            print(d, end=' ')
            d = 9
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
