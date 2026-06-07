try:
    for f in range(-3,-3+4,3):
        if f<=6:
            continue
        print(f, end=' ')
        f=6
    else:
        print(13, end=' ')
    print(f, end=' ')
    
except: print('error')
