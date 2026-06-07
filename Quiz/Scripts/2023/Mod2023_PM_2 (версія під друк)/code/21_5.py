try:
    for e in range(-2,-2+2,2):
        if e>8:
            continue
        print(e, end=' ')
        e=-6
        if e>=6:
            break
    else:
        print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
