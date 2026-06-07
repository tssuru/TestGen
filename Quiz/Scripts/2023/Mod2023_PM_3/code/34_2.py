try:
    try:
        s = {26:6, 64:2, 82:2, 45:1, 64:6}
        s[82] = 9
        for x in s.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
