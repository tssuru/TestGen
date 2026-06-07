try:
    try:
        s = {15:3, 69:9, 30:4, 30:8}
        s[69] = 9
        for x in s.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
