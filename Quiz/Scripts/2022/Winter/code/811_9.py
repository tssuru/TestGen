try:
    for a in range(6, 0, -2):
        if a <= 3:
            continue
            print(a, end=' ')
            a = 2
    else:
        print('end', end=' ')
    print(a, end=' ')
    
except: print('error')
