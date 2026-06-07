try:
    try:
        d = {10:2, 32:7, 74:0, 32:8}
        d[20] = 7
        for x, y in d.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
