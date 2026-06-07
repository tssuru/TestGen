try:
    try:
        s = {50:6, 18:8, 77:1, 80:8, 50:7}
        s[31] = 1
        for x in s.items():
            print(*x, sep=' ', end=' ')
    except:
        print('ERR')
    
except: print('error')
