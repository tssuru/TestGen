try:
    for d in range(10,10+2,-3):
        if d>=7:
            pass
        print(d, end=' ')
        d=-6
        if d>=5:
            break
    else:
        print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
