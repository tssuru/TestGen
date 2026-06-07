try:
    for d in range(-5,-5+2,2):
        if d>4:
            continue
        print(d, end=' ')
        d=9
        if d>3:
            break
    else:
        print(13, end=' ')
    print(d, end=' ')
    
except: print('error')
