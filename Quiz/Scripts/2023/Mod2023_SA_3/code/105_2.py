try:
    try:
        d = {28:7, 16:8, 86:9, 38:9}
        d[38] = 2
        for x, y in d.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
