try:
    try:
        s = {46:3, 48:3, 74:4, 79:8, 48:6}
        s[79] = 3
        for x, y in s.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
