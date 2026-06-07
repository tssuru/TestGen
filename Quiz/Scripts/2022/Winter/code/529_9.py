try:
    for b in range(6, 9, -1):
        if b >= 7:
            break
            print(b, end=' ')
            b = 6
        if b < 8:
            break
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
