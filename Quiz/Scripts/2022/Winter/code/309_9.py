try:
    for f in range(-6, -9, -1):
        if f <= -8:
            break
            print(f, end=' ')
            f = -9
    else:
        print('end', end=' ')
    print(f, end=' ')
    
except: print('error')
