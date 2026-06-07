try:
    for f in range(0, 9, 3):
        if f < 4:
            continue
            print(f, end=' ')
        else:
            print('end', end=' ')
    print(f, end=' ')
    
except: print('error')
