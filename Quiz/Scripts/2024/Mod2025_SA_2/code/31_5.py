try:
    for d in range(3,3+2,2):
        if d>=5:
            break
        print(d, end=' ')
        d=-7
    else:
        print(d, end=' ')
    print(d, end=' ')
except: print('error')
