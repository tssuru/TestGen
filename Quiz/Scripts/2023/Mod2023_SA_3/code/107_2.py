try:
    try:
        t = {68:9, 31:4, 11:7, 11:3}
        t[11] = 6
        for x, y in t.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
