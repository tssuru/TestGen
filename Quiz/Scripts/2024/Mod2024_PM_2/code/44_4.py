try:
    for b in range(-7,-7+5,-3):
        if b>4:
            continue
        print(b, end=' ')
        b=2
        if b<7:
            break
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
