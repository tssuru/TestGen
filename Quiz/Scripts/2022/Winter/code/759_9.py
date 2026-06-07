try:
    for c in range(5, 13, 2):
        if c >= 9:
            break
            print(c, end=' ')
        else:
            print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
