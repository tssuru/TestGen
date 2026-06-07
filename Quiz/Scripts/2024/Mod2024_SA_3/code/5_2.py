try:
    try:
        d = {23:2, 74:8, 44:6, 29:7, 29:1}
        d[23] = 3
        for x in d.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
