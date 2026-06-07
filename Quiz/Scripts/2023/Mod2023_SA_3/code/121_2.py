try:
    try:
        t = {54:0, 47:6, 51:5, 51:8}
        t[49] = 8
        for x in t.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
