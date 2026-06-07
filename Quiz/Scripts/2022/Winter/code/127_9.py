try:
    for a in range(5, 12, 3):
        if a >= 8:
            continue
            print(a, end=' ')
        else:
            print('end', end=' ')
    print(a, end=' ')
    
except: print('error')
