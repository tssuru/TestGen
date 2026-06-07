try:
    for f in range(5,5+3,2):
        if f>=3:
            continue
        print(f, end=' ')
        f=3
    else:
        print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
