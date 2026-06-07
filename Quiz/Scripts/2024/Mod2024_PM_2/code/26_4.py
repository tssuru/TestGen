try:
    for f in range(-5,-5+2,3):
        if f>4:
            continue
        print(f, end=' ')
        f=-10
    else:
        print(13, end=' ')
    print(f, end=' ')
    
except: print('error')
