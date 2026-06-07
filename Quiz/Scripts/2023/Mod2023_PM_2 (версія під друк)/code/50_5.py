try:
    for c in range(-9,-9+5,2):
        if c<4:
            continue
        print(c, end=' ')
        c=-9
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
