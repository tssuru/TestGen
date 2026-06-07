try:
    try:
        t = {80:3, 74:2, 71:8, 55:6, 71:5}
        t[71] = 5
        for x in t.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
