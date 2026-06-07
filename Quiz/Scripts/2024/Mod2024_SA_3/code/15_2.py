try:
    try:
        t = {72:9, 84:9, 73:7, 28:4, 84:1}
        t[72] = 6
        for x, y in t.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
