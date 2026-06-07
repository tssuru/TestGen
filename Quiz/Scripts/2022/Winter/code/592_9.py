try:
    for f in range(1, 10, 3):
        if f > 5:
            break
            print(f, end=' ')
            f = 4
        else:
            print('end', end=' ')
    print(f, end=' ')
    
except: print('error')
