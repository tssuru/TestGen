try:
    for a in range(3, -1, 2):
        if a < 1:
            continue
            print(a, end=' ')
            a = 0
    else:
        print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
