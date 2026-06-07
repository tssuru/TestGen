try:
    try:
        d = {59:9, 61:6, 48:2, 34:5, 59:8}
        d[27] = 1
        for x in d.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
