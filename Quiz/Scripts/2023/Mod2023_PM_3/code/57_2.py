try:
    try:
        s = {42:0, 55:3, 54:8, 70:7, 42:3}
        s[39] = 5
        for x in s :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
