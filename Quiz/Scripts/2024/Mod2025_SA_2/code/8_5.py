try:
    for c in range(5,5+4,3):
        if c>7:
            continue
        print(c, end=' ')
        c=-5
    else:
        print(c, end=' ')
    print(c, end=' ')
except: print('error')
