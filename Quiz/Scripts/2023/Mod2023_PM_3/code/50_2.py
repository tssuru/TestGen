try:
    try:
        t = {28:2, 83:1, 71:9, 45:8}
        t[72] = 4
        for x in t.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
