try:
    for d in range(-2, -5, -1):
        if d > -4:
            continue
            print(d, end=' ')
        if d > -3:
            break
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
