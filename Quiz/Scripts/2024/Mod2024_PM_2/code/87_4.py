try:
    for a in range(4,4+5,-2):
        if a<6:
            continue
        print(a, end=' ')
        a=-10
    else:
        print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
