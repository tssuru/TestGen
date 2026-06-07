try:
    def g(b):
        u=95
        if b: 
            u=6
        if b>-3:
             u=7
        else:
             return 3
        return u
    
    print(g(7))
    
except: print('error')
