try:
    for b in range(4, 16, 3):
        if b > 10:
            continue
            print(b, end=' ')
            b = 9
        if b <= 11:
            break
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
