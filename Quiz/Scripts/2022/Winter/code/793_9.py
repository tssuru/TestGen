try:
    for f in range(6, 2, -2):
        if f > 4:
            continue
            print(f, end=' ')
        if f <= 5:
            break
    else:
        print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
