try:
    for d in range(-4, 1, 2):
        if d < -2:
            continue
            print(d, end=' ')
        if d >= -1:
            break
    else:
        print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
