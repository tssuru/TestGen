try:
    try:
        s = {27:1, 26:4, 63:7, 50:2, 44:9}
        s[50] = 6
        for x in s.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
