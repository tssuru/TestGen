try:
    for c in range(3, 12, 3):
        if c > 7:
            break
            print(c, end=' ')
        if c >= 8:
            break
    else:
        print('end', end=' ')
    print(c, end=' ')
    
except: print('error')
