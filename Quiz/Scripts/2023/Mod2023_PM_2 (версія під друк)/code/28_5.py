try:
    for f in range(9,9+4,3):
        if f<7:
            break
        print(f, end=' ')
        f=-5
        if f>7:
            break
    else:
        print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
