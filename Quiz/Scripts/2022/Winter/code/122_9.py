try:
    for f in range(5, -2, -2):
        if f <= 1:
            continue
            print(f, end=' ')
            f = 0
    else:
        print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
