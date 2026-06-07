try:
    for e in range(-9, 1, 3):
        if e < -4:
            continue
            print(e, end=' ')
            e = -5
        if e >= -3:
            break
        else:
            print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
