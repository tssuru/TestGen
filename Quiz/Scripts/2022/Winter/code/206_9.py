try:
    for b in range(9, 13, 2):
        if b <= 11:
            break
            print(b, end=' ')
            b = 10
        if b <= 12:
            break
    else:
        print('end', end=' ')
    print(b, end=' ')
    
except: print('error')
