try:
    for a in range(7, 4, -1):
        if a >= 5:
            continue
            print(a, end=' ')
        if a < 6:
            break
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
