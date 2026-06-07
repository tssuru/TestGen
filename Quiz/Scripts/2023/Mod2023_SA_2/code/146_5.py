try:
    for c in range(9,9+6,3):
        if c>=4:
            continue
        print(c, end=' ')
        c=-8
        if c<=4:
            break
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
