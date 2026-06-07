try:
    for a in range(-5, 1, 2):
        if a <= -2:
            continue
            print(a, end=' ')
            a = -3
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
