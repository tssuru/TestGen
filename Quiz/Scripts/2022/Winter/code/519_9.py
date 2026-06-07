try:
    for e in range(5, 15, 3):
        if e < 10:
            continue
            print(e, end=' ')
        else:
            print('end', end=' ')
    print(e, end=' ')
    
except: print('error')
