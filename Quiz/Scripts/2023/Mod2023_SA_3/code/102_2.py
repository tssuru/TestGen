try:
    try:
        t = {48:5, 21:5, 39:8, 21:8}
        t[14] = 8
        for x in t.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
