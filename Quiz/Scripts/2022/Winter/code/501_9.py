try:
    for b in range(8, 2, 2):
        if b <= 5:
            break
            print(b, end=' ')
            b = 4
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
