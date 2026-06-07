try:
    try:
        t = {25:6, 44:3, 55:7, 55:8}
        t[55] = 3
        for x in t.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
