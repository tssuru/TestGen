try:
    try:
        t = {45:7, 13:9, 27:9, 41:3, 13:0}
        t[22] = 3
        for x in t.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
