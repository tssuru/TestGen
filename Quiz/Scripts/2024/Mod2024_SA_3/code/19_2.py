try:
    try:
        t = {65:6, 81:1, 72:0, 72:4}
        t[81] = 1
        for x, y in t.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
