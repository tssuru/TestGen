try:
    for a in range(-8, -11, -1):
        if a <= -10:
            continue
            print(a, end=' ')
        if a <= -9:
            break
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
