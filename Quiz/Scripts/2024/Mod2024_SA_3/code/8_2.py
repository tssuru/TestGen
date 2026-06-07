try:
    try:
        t = {23:2, 24:7, 48:8, 23:9}
        t[24] = 6
        for x, y in t.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
