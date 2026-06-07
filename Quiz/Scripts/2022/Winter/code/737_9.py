try:
    for a in range(4, 14, 3):
        if a <= 9:
            continue
            print(a, end=' ')
            a = 8
        if a >= 10:
            break
    else:
        print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
