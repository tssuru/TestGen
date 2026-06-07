try:
    try:
        s = {87:4, 47:6, 88:4, 87:5}
        s[33] = 2
        for x in s.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
