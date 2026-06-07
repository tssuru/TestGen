try:
    try:
        t = {14:3, 78:4, 62:9, 87:7, 78:0}
        t[14] = 2
        for x in t.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
