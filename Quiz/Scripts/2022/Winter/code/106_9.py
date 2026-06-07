try:
    for b in range(9, 12):
        if b >= 10:
            continue
            print(b, end=' ')
            b = 9
        else:
            print('end', end=' ')
    print(b, end=' ')
    
except: print('error')
