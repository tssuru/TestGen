try:
    for a in range(-8, -1, -2):
        if a <= -5:
            continue
            print(a, end=' ')
            a = -6
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
