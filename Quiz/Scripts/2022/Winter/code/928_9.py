try:
    for b in range(0, 9, 3):
        if b <= 4:
            continue
            print(b, end=' ')
            b = 3
    else:
        print('end', end=' ')
    print(b, end=' ')
    
except: print('error')
