try:
    try:
        t = {30:1, 71:2, 10:0, 10:6}
        t[37] = 4
        for x in t :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
