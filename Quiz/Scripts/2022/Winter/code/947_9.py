try:
    for a in range(4, 7, -1):
        if a <= 5:
            continue
            print(a, end=' ')
            a = 4
        else:
            print('end', end=' ')
    print(a, end=' ')
    
except: print('error')
