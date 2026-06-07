try:
    try:
        s = {31:5, 20:6, 10:8, 29:6, 10:8}
        s[72] = 0
        for x in s.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
