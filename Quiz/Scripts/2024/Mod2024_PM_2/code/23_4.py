try:
    for a in range(1,1+2,-3):
        if a<=7:
            pass
        print(a, end=' ')
        a=-5
        if a>=3:
            break
    else:
        print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
