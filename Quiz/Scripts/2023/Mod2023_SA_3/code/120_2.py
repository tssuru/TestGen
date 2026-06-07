try:
    try:
        t = {77:9, 16:9, 84:5, 16:9}
        t[58] = 5
        for x in t.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
