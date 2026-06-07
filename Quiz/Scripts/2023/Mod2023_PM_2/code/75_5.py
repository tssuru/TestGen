try:
    for b in range(-10,-10+5,3):
        if b>6:
            continue
        print(b, end=' ')
        b=-1
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
