try:
    for b in range(2, 10, 3):
        if b < 6:
            continue
            print(b, end=' ')
            b = 5
    else:
        print('end', end=' ')
    print(b, end=' ')
    
except: print('error')
