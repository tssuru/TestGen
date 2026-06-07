try:
    try:
        s = {16:7, 51:9, 41:8, 16:1}
        s[51] = 1
        for x in s.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
