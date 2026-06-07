try:
    try:
        d = {54:0, 47:6, 51:5, 51:8}
        d[49] = 8
        for x, y in d.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
