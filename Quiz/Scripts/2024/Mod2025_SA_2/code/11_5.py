try:
    for a in range(3,3+2,-2):
        if a>8:
            continue
        print(a, end=' ')
        a=-1
    else:
        print(13, end=' ')
    print(a, end=' ')
except: print('error')
