try:
    try:
        t = {85:4, 79:9, 29:7, 85:3}
        t[18] = 0
        for x, y in t.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
