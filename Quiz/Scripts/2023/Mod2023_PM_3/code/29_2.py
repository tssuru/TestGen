try:
    try:
        s = {43:0, 70:6, 48:2, 70:7}
        s[70] = 7
        for x in s.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
