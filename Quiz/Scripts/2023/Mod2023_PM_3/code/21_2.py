try:
    try:
        s = {47:5, 82:2, 75:0, 47:3}
        s[50] = 4
        for x in s :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
