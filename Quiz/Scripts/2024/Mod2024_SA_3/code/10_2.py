try:
    try:
        s = {77:2, 81:3, 83:1, 70:1, 70:1}
        s[77] = 4
        for x in s :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
