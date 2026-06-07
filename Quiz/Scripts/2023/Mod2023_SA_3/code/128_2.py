try:
    try:
        s = {23:3, 22:1, 17:5, 17:5}
        s[87] = 4
        for x in s.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
