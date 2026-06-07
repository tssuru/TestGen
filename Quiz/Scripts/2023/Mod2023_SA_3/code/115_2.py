try:
    try:
        t = {43:0, 70:6, 48:2, 70:7}
        t[70] = 7
        for x in t.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
