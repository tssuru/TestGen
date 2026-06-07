try:
    try:
        t = {14:5, 34:3, 84:8, 31:2}
        t[14] = 8
        for x in t.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
