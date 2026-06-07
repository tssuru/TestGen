try:
    try:
        t = {23:2, 24:7, 48:8, 23:9}
        t[24] = 6
        for x in t :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
