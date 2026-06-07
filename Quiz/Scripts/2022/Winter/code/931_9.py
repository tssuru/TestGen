try:
    for e in range(0, 2, -1):
        if e > 1:
            continue
            print(e, end=' ')
            e = 0
    else:
        print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
