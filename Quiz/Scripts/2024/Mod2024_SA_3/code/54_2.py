try:
    try:
        t = {27:1, 26:4, 63:7, 50:2, 44:9}
        t[50] = 6
        for x in t.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
