try:
    for b in range(7, 10):
        if b <= 8:
            continue
            print(b, end=' ')
        if b < 9:
            break
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
