try:
    for e in range(6, 3, -1):
        if e >= 4:
            continue
            print(e, end=' ')
            e = 3
        if e > 5:
            break
    else:
        print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
