try:
    try:
        t = {10:9, 24:6, 37:8, 10:2}
        t[77] = 1
        for x in t.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
