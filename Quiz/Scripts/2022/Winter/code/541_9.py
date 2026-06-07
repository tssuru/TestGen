try:
    for b in range(7, 1, -2):
        if b <= 4:
            continue
            print(b, end=' ')
        if b <= 5:
            break
    else:
        print('end', end=' ')
    print(b, end=' ')
    
except: print('error')
