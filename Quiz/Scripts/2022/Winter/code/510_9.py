try:
    for f in range(6, 10, 2):
        if f < 8:
            break
            print(f, end=' ')
            f = 7
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
