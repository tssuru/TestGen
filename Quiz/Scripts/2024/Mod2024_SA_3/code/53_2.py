try:
    try:
        d = {69:2, 22:3, 52:1, 22:1}
        d[65] = 9
        for x in d.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
