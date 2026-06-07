try:
    try:
        t = {63:4, 50:2, 62:9, 62:2}
        t[62] = 9
        for x in t :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
