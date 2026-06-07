try:
    try:
        s = {55:2, 71:2, 73:4, 12:4, 73:8}
        s[18] = 8
        for x in s.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
