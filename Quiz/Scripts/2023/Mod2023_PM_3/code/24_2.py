try:
    try:
        d = {84:7, 25:8, 51:0, 47:5}
        d[84] = 8
        for x in d.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
