try:
    try:
        t = {28:2, 34:9, 44:2, 34:7}
        t[34] = 3
        for x in t.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
