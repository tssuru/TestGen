try:
    try:
        d = {78:2, 38:2, 19:5, 19:0}
        d[51] = 2
        for x in d :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
