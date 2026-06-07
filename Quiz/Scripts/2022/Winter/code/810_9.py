try:
    for e in range(4, 7):
        if e < 5:
            continue
            print(e, end=' ')
            e = 4
        else:
            print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
