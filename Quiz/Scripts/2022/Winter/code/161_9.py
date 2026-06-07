try:
    for b in range(2, 8, -2):
        if b >= 5:
            continue
            print(b, end=' ')
        else:
            print('end', end=' ')
    print(b, end=' ')
    
except: print('error')
