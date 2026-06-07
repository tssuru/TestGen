try:
    for a in range(8, 18, 3):
        if a > 13:
            continue
            print(a, end=' ')
            a = 12
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
