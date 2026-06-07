try:
    for f in range(-7, -12, -2):
        if f <= -10:
            continue
            print(f, end=' ')
            f = -11
    else:
        print('end', end=' ')
    print(f, end=' ')
    
except: print('error')
