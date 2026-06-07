try:
    try:
        t = {30:7, 55:0, 79:3, 88:3, 55:6}
        t[55] = 8
        for x in t :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
