try:
    try:
        t = {38:6, 26:2, 74:4, 13:3, 13:7}
        t[26] = 4
        for x in t.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
