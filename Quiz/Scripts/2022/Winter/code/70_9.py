try:
    for b in range(1, 11, 3):
        if b < 6:
            break
            print(b, end=' ')
            b = 5
        else:
            print('end', end=' ')
    print(b, end=' ')
    
except: print('error')
