try:
    for a in range(6, 2, -2):
        if a >= 4:
            continue
            print(a, end=' ')
            a = 3
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
