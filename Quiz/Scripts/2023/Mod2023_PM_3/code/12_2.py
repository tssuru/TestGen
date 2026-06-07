try:
    try:
        t = {63:3, 57:0, 65:0, 46:3}
        t[18] = 4
        for x in t.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
