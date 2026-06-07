try:
    try:
        s = {62:7, 35:2, 54:6, 84:0, 62:1}
        s[67] = 5
        for x in s.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
