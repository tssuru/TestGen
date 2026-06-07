try:
    for b in range(3, 6):
        if b < 4:
            break
            print(b, end=' ')
            b = 3
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
