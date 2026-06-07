try:
    for d in range(-5, -1, 2):
        if d < -3:
            continue
            print(d, end=' ')
        if d < -2:
            break
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
