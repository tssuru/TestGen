try:
    try:
        t = {84:7, 25:8, 51:0, 47:5}
        t[84] = 8
        for x in t.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
