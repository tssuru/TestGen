try:
    for a in range(6, 9):
        if a > 7:
            continue
            print(a, end=' ')
            a = 6
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
