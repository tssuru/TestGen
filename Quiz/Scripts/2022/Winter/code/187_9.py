try:
    for d in range(5, 8):
        if d >= 6:
            break
            print(d, end=' ')
            d = 5
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
