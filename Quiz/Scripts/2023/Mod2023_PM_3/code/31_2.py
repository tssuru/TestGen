try:
    try:
        s = {77:4, 67:8, 16:6, 20:7, 16:5}
        s[67] = 6
        for x, y in s.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
