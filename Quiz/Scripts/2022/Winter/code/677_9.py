try:
    for e in range(1, 11, 3):
        if e > 6:
            continue
            print(e, end=' ')
            e = 5
        if e < 7:
            break
    else:
        print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
