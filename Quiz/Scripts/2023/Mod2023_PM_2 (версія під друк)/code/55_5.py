try:
    for b in range(9,9+6,3):
        if b<7:
            break
        print(b, end=' ')
        b=0
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
