try:
    try:
        s = {71:4, 57:1, 87:2, 87:8}
        s[81] = 9
        for x, y in s.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
