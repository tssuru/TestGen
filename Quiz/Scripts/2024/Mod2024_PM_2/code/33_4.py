try:
    for c in range(-7,-7+5,-3):
        if c>5:
            continue
        print(c, end=' ')
        c=-6
    else:
        print(13, end=' ')
    print(c, end=' ')
    
except: print('error')
