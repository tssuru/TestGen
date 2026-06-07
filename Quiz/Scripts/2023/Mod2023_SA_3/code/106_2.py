try:
    try:
        d = {75:9, 69:3, 43:2, 69:0}
        d[41] = 0
        for x in d.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
