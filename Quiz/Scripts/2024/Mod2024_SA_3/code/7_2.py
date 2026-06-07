try:
    try:
        d = {25:6, 44:3, 55:7, 55:8}
        d[55] = 3
        for x in d.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
