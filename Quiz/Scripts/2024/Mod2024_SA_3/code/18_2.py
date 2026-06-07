try:
    try:
        t = {50:3, 70:4, 87:3, 36:2, 87:6}
        t[87] = 2
        for x in t.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
