try:
    try:
        s = {42:6, 87:8, 34:2, 42:5}
        s[34] = 2
        for x in s.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
