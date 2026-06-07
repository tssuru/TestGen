try:
    try:
        s = {19:4, 41:7, 27:9, 61:8, 41:2}
        s[19] = 2
        for x in s.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
