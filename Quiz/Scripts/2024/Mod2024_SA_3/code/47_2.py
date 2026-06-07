try:
    try:
        s = {52:0, 55:9, 21:9, 36:5, 52:0}
        s[67] = 5
        for x in s.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
