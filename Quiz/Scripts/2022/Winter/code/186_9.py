try:
    for a in range(3, 12, 3):
        if a <= 7:
            continue
            print(a, end=' ')
            a = 6
        if a <= 8:
            break
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
