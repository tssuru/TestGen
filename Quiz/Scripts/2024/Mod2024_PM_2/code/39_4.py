try:
    for c in range(3,3+4,-3):
        if c>3:
            break
        print(c, end=' ')
        c=2
    else:
        print(13, end=' ')
    print(c, end=' ')
    
except: print('error')
