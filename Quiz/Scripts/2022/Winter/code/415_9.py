try:
    for b in range(7, 11, 2):
        if b > 9:
            continue
            print(b, end=' ')
        if b <= 10:
            break
    else:
        print('end', end=' ')
    print(b, end=' ')
    
except: print('error')
