try:
    for b in range(2, 13, 3):
        if b > 7:
            continue
            print(b, end=' ')
        if b >= 8:
            break
        else:
            print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
