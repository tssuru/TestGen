try:
    for f in range(2,2+3,3):
        if f>3:
            continue
        print(f, end=' ')
        f=-1
    else:
        print(f, end=' ')
    print(f, end=' ')
except: print('error')
