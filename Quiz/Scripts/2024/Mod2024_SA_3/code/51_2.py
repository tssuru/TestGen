try:
    try:
        t = {28:0, 17:0, 58:4, 58:3}
        t[38] = 2
        for x in t.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
