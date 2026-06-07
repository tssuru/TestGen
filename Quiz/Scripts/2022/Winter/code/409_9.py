try:
    for f in range(7, 15, 3):
        if f <= 11:
            continue
            print(f, end=' ')
            f = 10
    else:
        print('end', end=' ')
    print(f, end=' ')
    
except: print('error')
