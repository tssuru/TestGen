try:
    for c in range(5,5+3,-2):
        if c>=5:
            continue
        print(c, end=' ')
        c=-4
    else:
        print(13, end=' ')
    print(c, end=' ')
    
except: print('error')
