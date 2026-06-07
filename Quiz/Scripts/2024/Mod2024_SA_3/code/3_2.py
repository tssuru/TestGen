try:
    try:
        d = {38:2, 40:9, 48:1, 48:7}
        d[48] = 4
        for x, y in d.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
