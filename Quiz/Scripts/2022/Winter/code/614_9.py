try:
    for b in range(8, 14, 2):
        if b > 11:
            continue
            print(b, end=' ')
            b = 10
        else:
            print('end', end=' ')
    print(b, end=' ')
    
except: print('error')
