try:
    for c in range(8,8+4,2):
        if c<=6:
            break
        print(c, end=' ')
        c=0
    else:
        print(c, end=' ')
    print(c, end=' ')
except: print('error')
