try:
    for e in range(5, -5, 3):
        if e < 0:
            break
            print(e, end=' ')
            e = -1
        else:
            print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
