try:
    for f in range(4, 8):
        if f <= 6:
            break
            print(f, end=' ')
            f = 5
        else:
            print('end', end=' ')
    print(f, end=' ')
    
except: print('error')
