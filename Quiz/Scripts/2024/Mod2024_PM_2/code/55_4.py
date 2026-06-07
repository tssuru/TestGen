try:
    for b in range(10,10+6,3):
        if b>=6:
            break
        print(b, end=' ')
        b=-5
        if b>=4:
            break
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
