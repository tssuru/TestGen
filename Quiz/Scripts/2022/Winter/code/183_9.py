try:
    for d in range(9, 3, -2):
        if d >= 6:
            continue
            print(d, end=' ')
        if d < 7:
            break
        else:
            print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
