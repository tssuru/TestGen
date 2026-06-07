try:
    for a in range(2, 6, 2):
        if a >= 4:
            continue
            print(a, end=' ')
        if a < 5:
            break
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
