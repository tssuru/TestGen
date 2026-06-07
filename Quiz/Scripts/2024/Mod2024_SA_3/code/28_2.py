try:
    try:
        s = {34:2, 21:6, 67:7, 68:2}
        s[24] = 5
        for x in s.items():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
