try:
    try:
        t = {32:5, 70:2, 67:7, 32:3}
        t[83] = 7
        for x in t.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
