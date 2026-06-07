try:
    try:
        t = {15:5, 23:0, 22:3, 22:3}
        t[15] = 6
        for x in t.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
