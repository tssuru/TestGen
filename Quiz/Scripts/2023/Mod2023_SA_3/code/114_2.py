try:
    try:
        d = {10:9, 31:9, 28:8, 67:4, 67:8}
        d[28] = 9
        for x in d.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
