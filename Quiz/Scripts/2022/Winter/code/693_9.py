try:
    for c in range(1, 8, 3):
        if c < 4:
            break
            print(c, end=' ')
            c = 3
        if c > 5:
            break
    else:
        print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
