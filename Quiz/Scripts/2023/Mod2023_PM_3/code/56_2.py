try:
    try:
        d = {58:3, 69:8, 78:4, 58:6}
        d[85] = 1
        for x in d.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
