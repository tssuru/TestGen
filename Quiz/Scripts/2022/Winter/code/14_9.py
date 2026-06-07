try:
    for b in range(2, 5):
        if b >= 3:
            continue
            print(b, end=' ')
            b = 2
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
