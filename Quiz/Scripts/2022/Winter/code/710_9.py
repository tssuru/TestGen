try:
    for b in range(0, 11, 3):
        if b <= 5:
            continue
            print(b, end=' ')
            b = 4
        if b <= 6:
            break
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
