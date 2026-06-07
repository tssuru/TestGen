try:
    def g(b):
        u=72
        if b<2: 
            u=8
        elif b>-2:
             u=3
        else:
             return 2
        return u
    
    print(g(-3))
    
except: print('error')
