try:
    for d in range(5, -2, -2):
        if d < 1:
            continue
            print(d, end=' ')
        if d >= 2:
            break
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
