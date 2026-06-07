try:
    try:
        s = {58:2, 31:2, 90:2, 90:9}
        s[58] = 9
        for x in s.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
