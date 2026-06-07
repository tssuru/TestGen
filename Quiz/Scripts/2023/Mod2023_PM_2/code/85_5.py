try:
    for f in range(5,5+3,-2):
        if f<4:
            pass
        print(f, end=' ')
        f=-5
    else:
        print(13, end=' ')
    print(f, end=' ')
    
except: print('error')
