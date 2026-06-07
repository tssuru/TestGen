try:
    for a in range(-1, 4, 2):
        if a < 1:
            continue
            print(a, end=' ')
        if a >= 2:
            break
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
