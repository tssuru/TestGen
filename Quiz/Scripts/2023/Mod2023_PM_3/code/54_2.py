try:
    try:
        t = {16:8, 18:8, 25:5, 20:2, 16:8}
        t[16] = 8
        for x, y in t.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
