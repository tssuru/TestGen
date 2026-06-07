try:
    def g(b):
        u=44
        if b!=2: 
            u=3
        elif b>1:
             return 2
        else:
             u=9
        return u
    
    print(g(-7))
    
except: print('error')
