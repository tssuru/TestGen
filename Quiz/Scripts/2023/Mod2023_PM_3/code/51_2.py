try:
    try:
        s = {68:6, 67:5, 30:4, 13:6, 46:1}
        s[68] = 8
        for x in s.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
