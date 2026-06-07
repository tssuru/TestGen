try:
    try:
        s = {12:8, 71:9, 22:6, 12:3}
        s[35] = 2
        for x in s.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
