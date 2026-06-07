try:
    for f in range(1, -2, -1):
        if f <= -1:
            break
            print(f, end=' ')
            f = -2
        else:
            print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
