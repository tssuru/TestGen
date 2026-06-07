try:
    try:
        d = {11:2, 88:2, 40:5, 11:5}
        d[11] = 4
        for x in d.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
