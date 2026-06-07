try:
    try:
        d = {12:6, 78:8, 55:1, 55:2}
        d[78] = 4
        for x in d.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
