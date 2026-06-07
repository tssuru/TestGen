try:
    try:
        d = {28:0, 17:0, 58:4, 58:3}
        d[38] = 2
        for x in d.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
