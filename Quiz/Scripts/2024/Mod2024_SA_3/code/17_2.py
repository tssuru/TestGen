try:
    try:
        s = {38:7, 63:0, 45:0, 82:0, 45:0}
        s[18] = 0
        for x in s.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
