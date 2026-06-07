try:
    for a in range(9, 6, -1):
        if a < 7:
            break
            print(a, end=' ')
            a = 6
        if a >= 8:
            break
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
