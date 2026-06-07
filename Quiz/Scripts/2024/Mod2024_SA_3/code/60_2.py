try:
    try:
        s = {81:9, 42:5, 32:0, 81:1}
        s[67] = 1
        for x, y in s.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
