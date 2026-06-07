try:
    for a in range(-8, -12, -1):
        if a > -10:
            continue
            print(a, end=' ')
            a = -11
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
