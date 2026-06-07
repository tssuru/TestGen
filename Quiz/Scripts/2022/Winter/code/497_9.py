try:
    for f in range(2, 10, 2):
        if f < 6:
            break
            print(f, end=' ')
            f = 5
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
