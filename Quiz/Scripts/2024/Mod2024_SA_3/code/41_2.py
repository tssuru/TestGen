try:
    try:
        d = {47:1, 20:1, 87:1, 87:3}
        d[50] = 8
        for x in d.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
