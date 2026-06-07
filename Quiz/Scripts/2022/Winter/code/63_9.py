try:
    for e in range(1, 7, 3):
        if e < 4:
            continue
            print(e, end=' ')
        else:
            print('end', end=' ')
    print(e, end=' ')
    
except: print('error')
