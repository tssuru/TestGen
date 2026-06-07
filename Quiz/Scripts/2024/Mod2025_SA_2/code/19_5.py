try:
    for f in range(-4,-4+3,-3):
        if f>=8:
            break
        print(f, end=' ')
        f=-4
    else:
        print(13, end=' ')
    print(f, end=' ')
except: print('error')
