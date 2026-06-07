try:
    try:
        s = {68:1, 38:2, 27:9, 68:3}
        s[87] = 8
        for x in s :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
