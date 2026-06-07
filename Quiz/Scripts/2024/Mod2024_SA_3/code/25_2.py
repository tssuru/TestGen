try:
    try:
        d = {46:3, 48:3, 74:4, 79:8, 48:6}
        d[79] = 3
        for x in d :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
