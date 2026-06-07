try:
    for d in range(2,2+2,3):
        if d>3:
            continue
        print(d, end=' ')
        d=3
    else:
        print(13, end=' ')
    print(d, end=' ')
    
except: print('error')
