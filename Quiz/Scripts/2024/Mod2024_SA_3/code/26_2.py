try:
    try:
        s = {28:3, 34:5, 37:9, 37:2}
        s[66] = 1
        for x, y in s.items():
            print(x, y, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
