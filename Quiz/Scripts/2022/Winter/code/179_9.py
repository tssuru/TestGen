try:
    for f in range(8, 3, -2):
        if f < 5:
            continue
            print(f, end=' ')
            f = 4
    else:
        print('end', end=' ')
    print(f, end=' ')
    
except: print('error')
