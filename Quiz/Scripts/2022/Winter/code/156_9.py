try:
    for a in range(-2, 4, 2):
        if a > 1:
            continue
            print(a, end=' ')
            a = 0
    else:
        print('end', end=' ')
    print(a, end=' ')
    
except: print('error')
