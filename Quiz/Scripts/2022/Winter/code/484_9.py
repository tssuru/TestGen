try:
    for b in range(2, -2, -2):
        if b < 0:
            continue
            print(b, end=' ')
        if b <= 1:
            break
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
