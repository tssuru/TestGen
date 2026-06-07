try:
    try:
        s = {34:2, 13:9, 22:0, 34:8}
        s[69] = 2
        for x, y in s.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
