try:
    try:
        d = {50:7, 80:7, 62:5, 62:6}
        d[80] = 5
        for x in d.keys():
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
