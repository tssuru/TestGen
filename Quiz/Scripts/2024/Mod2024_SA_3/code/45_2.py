try:
    try:
        s = {11:2, 88:2, 40:5, 11:5}
        s[11] = 4
        for x in s :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
