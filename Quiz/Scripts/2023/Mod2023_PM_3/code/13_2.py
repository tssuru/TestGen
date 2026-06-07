try:
    try:
        d = {90:0, 64:4, 86:7, 90:1}
        d[37] = 1
        for x in d :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
