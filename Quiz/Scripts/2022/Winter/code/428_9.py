try:
    for f in range(4, 10, 2):
        if f <= 7:
            continue
            print(f, end=' ')
            f = 6
    else:
        print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
