try:
    try:
        t = {10:0, 48:0, 64:4, 35:3, 10:4}
        t[76] = 9
        for x in t.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
