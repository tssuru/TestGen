try:
    try:
        d = {63:3, 57:0, 65:0, 46:3}
        d[18] = 4
        for x in d.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
