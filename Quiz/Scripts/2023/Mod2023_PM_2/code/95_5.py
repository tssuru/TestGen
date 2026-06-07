try:
    for f in range(1,1+5,2):
        if f<=8:
            pass
        print(f, end=' ')
        f=-7
        if f<8:
            break
    else:
        print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
