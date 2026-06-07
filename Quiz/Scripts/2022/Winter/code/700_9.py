try:
    for e in range(4, 10, 3):
        if e > 7:
            continue
            print(e, end=' ')
        if e <= 8:
            break
    else:
        print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
