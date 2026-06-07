try:
    try:
        t = {61:1, 56:5, 50:6, 73:1, 56:7}
        t[59] = 4
        for x in t.values():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
