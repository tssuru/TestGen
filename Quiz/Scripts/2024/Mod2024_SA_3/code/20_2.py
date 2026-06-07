try:
    try:
        d = {83:9, 66:0, 34:7, 29:0, 25:6}
        d[21] = 3
        for x in d.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
