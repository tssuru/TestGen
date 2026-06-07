try:
    for e in range(9, 6):
        if e > 7:
            continue
            print(e, end=' ')
            e = 6
        else:
            print('end', end=' ')
    print(e, end=' ')
    
except: print('error')
