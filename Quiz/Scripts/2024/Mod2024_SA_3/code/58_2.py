try:
    try:
        d = {79:2, 87:7, 83:6, 47:7, 83:3}
        d[79] = 9
        for x in d.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
