try:
    for b in range(3, -3, 2):
        if b > 0:
            continue
            print(b, end=' ')
            b = -1
    else:
        print('end', end=' ')
    print(b, end=' ')
    
except: print('error')
