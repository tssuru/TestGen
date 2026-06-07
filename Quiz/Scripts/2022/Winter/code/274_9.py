try:
    for f in range(-2, -9, -2):
        if f < -6:
            break
            print(f, end=' ')
            f = -7
    else:
        print('end', end=' ')
    print(f, end=' ')
    
except: print('error')
