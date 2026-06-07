try:
    for b in range(7, 10):
        if b <= 8:
            break
            print(b, end=' ')
            b = 7
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
