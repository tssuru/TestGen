try:
    for c in range(-5, 5, 3):
        if c < 0:
            break
            print(c, end=' ')
            c = -1
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
