try:
    for a in range(-6, -11, -2):
        if a > -9:
            continue
            print(a, end=' ')
            a = -10
    else:
        print('end', end=' ')
    print(a, end=' ')
    
except: print('error')
