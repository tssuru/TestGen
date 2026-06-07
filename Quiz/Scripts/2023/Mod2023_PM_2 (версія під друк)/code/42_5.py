try:
    for b in range(7,7+6,3):
        if b<=3:
            continue
        print(b, end=' ')
        b=0
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
