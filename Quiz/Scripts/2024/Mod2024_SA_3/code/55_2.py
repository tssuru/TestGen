try:
    try:
        s = {87:0, 35:7, 54:9, 87:9}
        s[39] = 7
        for x in s.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
