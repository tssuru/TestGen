try:
    for a in range(-1, 5, 3):
        if a > 2:
            continue
            print(a, end=' ')
            a = 1
    else:
        print('end', end=' ')
    print(a, end=' ')
    
except: print('error')
