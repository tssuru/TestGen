try:
    for b in range(0, 8, 3):
        if b < 4:
            continue
            print(b, end=' ')
            b = 3
        if b < 5:
            break
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
