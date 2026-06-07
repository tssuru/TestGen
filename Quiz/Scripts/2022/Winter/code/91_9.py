try:
    for a in range(-9, 0, 3):
        if a < -5:
            continue
            print(a, end=' ')
            a = -6
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
