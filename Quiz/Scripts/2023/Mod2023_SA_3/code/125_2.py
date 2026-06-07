try:
    try:
        s = {89:2, 53:8, 80:8, 53:7}
        s[30] = 2
        for x in s :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
