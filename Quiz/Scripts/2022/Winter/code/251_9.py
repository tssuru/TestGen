try:
    for f in range(0, 11, 3):
        if f > 5:
            continue
            print(f, end=' ')
        else:
            print('end', end=' ')
    print(f, end=' ')
    
except: print('error')
