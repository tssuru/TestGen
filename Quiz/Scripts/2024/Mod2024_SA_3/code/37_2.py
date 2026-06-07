try:
    try:
        d = {21:9, 57:5, 89:5, 89:9}
        d[32] = 8
        for x in d.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
