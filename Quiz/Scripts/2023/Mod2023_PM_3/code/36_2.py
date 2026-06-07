try:
    try:
        t = {21:9, 57:5, 89:5, 89:9}
        t[32] = 8
        for x in t :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
