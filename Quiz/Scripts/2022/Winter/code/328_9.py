try:
    for b in range(5, 12, 2):
        if b >= 8:
            continue
            print(b, end=' ')
            b = 7
        if b >= 9:
            break
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
