try:
    for b in range(8, 12):
        if b <= 10:
            continue
            print(b, end=' ')
        if b >= 11:
            break
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
