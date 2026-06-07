try:
    for d in range(6, 1, -2):
        if d > 3:
            continue
            print(d, end=' ')
        else:
            print('end', end=' ')
    print(d, end=' ')
    
except: print('error')
