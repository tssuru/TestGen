try:
    for a in range(2, 13, 3):
        if a >= 7:
            continue
            print(a, end=' ')
        else:
            print('end', end=' ')
    print(a, end=' ')
    
except: print('error')
