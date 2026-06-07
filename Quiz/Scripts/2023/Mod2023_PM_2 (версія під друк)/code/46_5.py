try:
    for f in range(2,2+6,2):
        if f<=8:
            break
        print(f, end=' ')
        f=7
        if f>=5:
            break
    else:
        print(f, end=' ')
    print(f, end=' ')
    
except: print('error')
