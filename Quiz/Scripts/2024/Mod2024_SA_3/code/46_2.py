try:
    try:
        t = {39:9, 55:3, 30:4, 70:0, 55:9}
        t[58] = 3
        for x, y in t.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
