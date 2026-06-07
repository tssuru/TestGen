try:
    for b in range(10,10+2,2):
        if b<7:
            continue
        print(b, end=' ')
        b=2
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
