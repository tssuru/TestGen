try:
    for e in range(8, 15, 3):
        if e > 11:
            continue
            print(e, end=' ')
            e = 10
        else:
            print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
