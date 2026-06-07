try:
    try:
        d = {75:1, 56:1, 63:1, 47:2, 47:9}
        d[64] = 1
        for x in d.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
