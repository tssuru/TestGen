try:
    try:
        s = {16:9, 68:5, 43:9, 40:5, 68:8}
        s[72] = 0
        for x, y in s.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
