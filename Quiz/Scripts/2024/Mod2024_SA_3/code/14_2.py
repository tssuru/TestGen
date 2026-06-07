try:
    try:
        d = {77:9, 16:9, 84:5, 16:9}
        d[58] = 5
        for x in d :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
