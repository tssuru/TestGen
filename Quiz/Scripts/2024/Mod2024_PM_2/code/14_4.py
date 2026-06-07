try:
    for e in range(1,1+4,-2):
        if e>8:
            continue
        print(e, end=' ')
        e=1
        if e>8:
            break
    else:
        print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
