try:
    try:
        s = {52:3, 48:2, 73:4, 41:6, 43:9}
        s[73] = 3
        for x in s.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
