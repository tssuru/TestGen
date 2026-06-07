try:
    try:
        s = {62:7, 88:9, 78:9, 62:9}
        s[47] = 2
        for x in s.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
