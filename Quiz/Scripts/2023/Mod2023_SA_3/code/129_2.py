try:
    try:
        d = {48:3, 44:5, 17:9, 84:0}
        d[48] = 8
        for x in d.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
