try:
    for c in range(4,4+5,-2):
        if c>=4:
            break
        print(c, end=' ')
        c=-1
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
