try:
    for a in range(9, 20, 3):
        if a > 14:
            continue
            print(a, end=' ')
            a = 13
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
