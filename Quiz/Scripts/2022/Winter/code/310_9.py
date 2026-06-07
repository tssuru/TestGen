try:
    for b in range(5, 2, -1):
        if b > 3:
            break
            print(b, end=' ')
        if b <= 4:
            break
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
