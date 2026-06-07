try:
    for a in range(7, 2, -2):
        if a > 4:
            break
            print(a, end=' ')
            a = 3
        if a > 5:
            break
    else:
        print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
