try:
    try:
        d = {32:5, 70:2, 67:7, 32:3}
        d[83] = 7
        for x in d.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
