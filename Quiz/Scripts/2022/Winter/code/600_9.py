try:
    for f in range(5, 1, -1):
        if f <= 3:
            continue
            print(f, end=' ')
        if f > 4:
            break
    else:
        print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
