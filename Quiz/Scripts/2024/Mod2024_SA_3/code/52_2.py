try:
    try:
        s = {72:7, 36:3, 44:0, 49:5, 44:3}
        s[47] = 3
        for x, y in s.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
