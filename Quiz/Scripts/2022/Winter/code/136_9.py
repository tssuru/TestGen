try:
    for e in range(5, 10, 2):
        if e > 7:
            continue
            print(e, end=' ')
            e = 6
        else:
            print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
