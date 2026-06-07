try:
    try:
        d = {36:2, 85:1, 68:1, 85:6}
        d[36] = 2
        for x in d.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
