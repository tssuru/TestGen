try:
    try:
        s = {76:4, 56:0, 67:3, 56:0}
        s[56] = 7
        for x in s.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
