try:
    try:
        s = {53:8, 88:9, 90:8, 90:9}
        s[88] = 3
        for x in s.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
