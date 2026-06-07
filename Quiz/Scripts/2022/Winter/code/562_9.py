try:
    for a in range(7, 3, -1):
        if a < 5:
            continue
            print(a, end=' ')
            a = 4
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
