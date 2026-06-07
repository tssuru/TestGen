try:
    try:
        t = {64:4, 67:8, 83:7, 50:8, 83:5}
        t[38] = 7
        for x in t.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
