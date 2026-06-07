try:
    try:
        d = {87:5, 64:6, 24:5, 35:7, 35:2}
        d[16] = 2
        for x in d.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
