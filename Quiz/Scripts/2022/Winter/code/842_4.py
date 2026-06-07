try:
    def g(c):
        u=31
        if c: 
            return 4
        if c>-2:
             return 0
        else:
             u=6
        return u
    
    print(g(-2))
    
except: print('error')
