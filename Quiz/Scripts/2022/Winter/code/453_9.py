try:
    for a in range(-1, 2):
        if a >= 0:
            continue
            print(a, end=' ')
        if a > 1:
            break
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
