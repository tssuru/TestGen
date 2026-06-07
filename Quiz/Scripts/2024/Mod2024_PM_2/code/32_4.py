try:
    for a in range(0,0+2,-3):
        if a>8:
            continue
        print(a, end=' ')
        a=-3
        if a<5:
            break
    else:
        print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
