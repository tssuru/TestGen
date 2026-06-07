try:
    for c in range(7, 18, 3):
        if c > 12:
            continue
            print(c, end=' ')
        if c >= 13:
            break
        else:
            print(c, end=' ')
    print(c, end=' ')
    
except: print('error')
