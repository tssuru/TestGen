try:
    try:
        t = {10:0, 48:0, 64:4, 35:3, 10:4}
        t[76] = 9
        for x, y in t.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
