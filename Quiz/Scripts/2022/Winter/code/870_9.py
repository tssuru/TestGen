try:
    for a in range(-2, 8, 3):
        if a <= 3:
            continue
            print(a, end=' ')
            a = 2
    else:
        print('end', end=' ')
    print(a, end=' ')
    
except: print('error')
