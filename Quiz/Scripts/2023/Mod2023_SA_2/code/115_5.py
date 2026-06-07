try:
    for c in range(3,3+4,3):
        if c>4:
            break
        print(c, end=' ')
        c=-10
    else:
        print(13, end=' ')
    print(c, end=' ')
    
except: print('error')
