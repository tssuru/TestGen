try:
    try:
        t = {90:1, 55:9, 46:5, 26:4, 41:1}
        t[75] = 6
        for x, y in t.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
