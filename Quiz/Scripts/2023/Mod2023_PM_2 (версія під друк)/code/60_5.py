try:
    for a in range(-6,-6+6,2):
        if a>=4:
            continue
        print(a, end=' ')
        a=-5
        if a>8:
            break
    else:
        print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
