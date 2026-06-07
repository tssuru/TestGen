try:
    for a in range(13, 7, 3):
        if a < 10:
            continue
            print(a, end=' ')
            a = 9
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
