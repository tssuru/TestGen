try:
    for a in range(-1, -9, -2):
        if a > -5:
            continue
            print(a, end=' ')
        if a >= -4:
            break
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
