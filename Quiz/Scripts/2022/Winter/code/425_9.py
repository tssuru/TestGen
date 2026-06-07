try:
    for f in range(-3, -11, -2):
        if f >= -7:
            continue
            print(f, end=' ')
        if f > -6:
            break
        else:
            print('end', end=' ')
    print(f, end=' ')
    
except: print('error')
