try:
    for a in range(0, 10, 3):
        if a >= 5:
            continue
            print(a, end=' ')
        else:
            print('end', end=' ')
    print(a, end=' ')
    
except: print('error')
