try:
    for a in range(0, -8, -2):
        if a >= -4:
            continue
            print(a, end=' ')
            a = -5
        if a <= -3:
            break
    else:
        print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
