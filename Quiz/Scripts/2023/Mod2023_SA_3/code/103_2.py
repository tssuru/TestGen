try:
    try:
        t = {77:0, 65:5, 30:1, 50:8}
        t[77] = 8
        for x in t.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
