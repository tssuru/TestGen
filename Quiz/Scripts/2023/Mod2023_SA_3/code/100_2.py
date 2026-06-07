try:
    try:
        d = {54:6, 24:0, 80:3, 42:7, 54:3}
        d[39] = 5
        for x in d.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
