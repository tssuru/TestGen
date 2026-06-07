try:
    try:
        s = {28:0, 51:6, 20:7, 53:6, 12:8}
        s[28] = 1
        for x in s.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
