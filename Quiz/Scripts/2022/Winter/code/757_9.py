try:
    for a in range(-5, 4, 3):
        if a > -1:
            continue
            print(a, end=' ')
            a = -2
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
