try:
    for e in range(7,7+3,-2):
        if e>=4:
            pass
        print(e, end=' ')
        e=-2
        if e>8:
            break
    else:
        print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
