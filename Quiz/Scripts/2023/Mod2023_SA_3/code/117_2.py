try:
    try:
        d = {48:0, 71:8, 21:5, 25:5}
        d[71] = 1
        for x in d :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
