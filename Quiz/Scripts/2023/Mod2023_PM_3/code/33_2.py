try:
    try:
        d = {34:2, 13:9, 22:0, 34:8}
        d[69] = 2
        for x in d.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
