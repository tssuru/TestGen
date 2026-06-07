try:
    for a in range(9, 16, 3):
        if a < 12:
            continue
            print(a, end=' ')
            a = 11
    else:
        print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
