try:
    try:
        d = {39:5, 22:5, 70:3, 70:1}
        d[66] = 8
        for x in d :
            print(x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
