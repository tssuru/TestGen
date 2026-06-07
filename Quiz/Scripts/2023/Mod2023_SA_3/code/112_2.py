try:
    try:
        t = {90:0, 64:4, 86:7, 90:1}
        t[37] = 1
        for x, y in t.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
