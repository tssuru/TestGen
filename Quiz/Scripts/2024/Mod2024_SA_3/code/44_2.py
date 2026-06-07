try:
    try:
        d = {37:4, 39:7, 75:1, 72:8, 72:6}
        d[77] = 4
        for x in d.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
