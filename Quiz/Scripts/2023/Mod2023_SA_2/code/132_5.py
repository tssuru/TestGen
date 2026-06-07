try:
    for a in range(5,5+6,-2):
        if a<=6:
            continue
        print(a, end=' ')
        a=-1
    else:
        print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
