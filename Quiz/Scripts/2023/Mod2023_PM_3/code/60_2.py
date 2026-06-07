try:
    try:
        d = {75:6, 13:2, 47:4, 75:6}
        d[15] = 0
        for x in d.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
