try:
    try:
        d = {82:5, 31:3, 13:1, 13:7}
        d[31] = 9
        for x in d.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
