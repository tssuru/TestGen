try:
    for d in range(6, 17, 3):
        if d >= 11:
            break
            print(d, end=' ')
            d = 10
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
