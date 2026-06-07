try:
    for a in range(-9,-9+2,3):
        if a>4:
            continue
        print(a, end=' ')
        a=-2
        if a<=3:
            break
    else:
        print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
