try:
    for a in range(-9, -2, 2):
        if a <= -6:
            break
            print(a, end=' ')
            a = -7
        if a >= -5:
            break
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
