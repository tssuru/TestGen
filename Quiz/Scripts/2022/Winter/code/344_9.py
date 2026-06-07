try:
    for a in range(3, -3, -2):
        if a < 0:
            continue
            print(a, end=' ')
            a = -1
    else:
        print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
