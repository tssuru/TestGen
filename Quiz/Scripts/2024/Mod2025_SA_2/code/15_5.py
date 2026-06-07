try:
    for a in range(10,10+3,-3):
        if a>=3:
            continue
        print(a, end=' ')
        a=3
    else:
        print(a, end=' ')
    print(a, end=' ')
except: print('error')
