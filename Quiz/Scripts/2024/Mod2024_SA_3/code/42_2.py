try:
    try:
        s = {84:7, 25:8, 51:0, 47:5}
        s[84] = 8
        for x in s :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
