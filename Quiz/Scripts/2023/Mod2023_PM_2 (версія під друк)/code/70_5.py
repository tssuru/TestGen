try:
    for c in range(5,5+6,3):
        if c>=3:
            continue
        print(c, end=' ')
        c=3
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
