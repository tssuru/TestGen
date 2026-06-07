try:
    try:
        d = {31:6, 41:8, 10:9, 40:1, 31:9}
        d[83] = 5
        for x in d.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
