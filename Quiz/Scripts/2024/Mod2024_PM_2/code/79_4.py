try:
    for f in range(-4,-4+3,-3):
        if f>=8:
            continue
        print(f, end=' ')
        f=10
        if f<=7:
            break
    else:
        print(13, end=' ')
    print(f, end=' ')
    
except: print('error')
