try:
    for e in range(10,10+4,-3):
        if e>=8:
            continue
        print(e, end=' ')
        e=3
        if e>=8:
            break
    else:
        print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
