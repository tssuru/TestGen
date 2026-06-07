try:
    for f in range(9,9+5,3):
        if f>=7:
            pass
        print(f, end=' ')
        f=-7
        if f<=7:
            break
    else:
        print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
