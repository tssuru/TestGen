try:
    try:
        d = {60:1, 54:1, 15:5, 42:1, 15:2}
        d[15] = 9
        for x in d.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
