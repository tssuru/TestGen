try:
    for a in range(6, 13, 2):
        if a <= 9:
            continue
            print(a, end=' ')
        if a < 10:
            break
    else:
        print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
