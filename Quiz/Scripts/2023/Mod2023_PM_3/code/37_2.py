try:
    try:
        d = {83:7, 34:6, 35:3, 35:9}
        d[34] = 6
        for x in d.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
