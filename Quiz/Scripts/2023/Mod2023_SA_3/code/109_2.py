try:
    try:
        d = {52:3, 48:2, 73:4, 41:6, 43:9}
        d[73] = 3
        for x in d.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
