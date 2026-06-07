try:
    for c in range(-5, -2):
        if c >= -4:
            continue
            print(c, end=' ')
        if c < -3:
            break
        else:
            print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
