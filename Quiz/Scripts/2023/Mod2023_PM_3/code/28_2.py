try:
    try:
        t = {65:8, 62:9, 79:9, 62:8}
        t[15] = 7
        for x in t :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
