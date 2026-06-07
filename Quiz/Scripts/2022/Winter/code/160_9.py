try:
    for e in range(9, 17, 3):
        if e < 13:
            break
            print(e, end=' ')
            e = 12
        if e < 14:
            break
        else:
            print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
