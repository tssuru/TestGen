try:
    try:
        s = {14:3, 78:4, 62:9, 87:7, 78:0}
        s[14] = 2
        for x in s.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
