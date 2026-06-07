try:
    for b in range(-5, -11, -2):
        if b >= -8:
            continue
            print(b, end=' ')
            b = -9
    else:
        print('end', end=' ')
    print(b, end=' ')
    
except: print('error')
