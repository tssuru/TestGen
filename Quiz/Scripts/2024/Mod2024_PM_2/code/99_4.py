try:
    for a in range(1,1+5,-3):
        if a>8:
            break
        print(a, end=' ')
        a=-1
    else:
        print(13, end=' ')
    print(a, end=' ')
    
except: print('error')
