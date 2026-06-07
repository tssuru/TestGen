try:
    try:
        t = {83:9, 53:8, 85:7, 53:9}
        t[83] = 5
        for x in t.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
