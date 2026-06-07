try:
    try:
        t = {55:6, 19:9, 22:3, 53:1, 22:2}
        t[11] = 0
        for x in t.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
