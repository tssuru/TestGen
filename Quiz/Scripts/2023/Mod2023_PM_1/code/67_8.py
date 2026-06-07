try:
    def g(a,b):
        c=18
        if a>-3:
            c=6
        if a>=1:
             c=9
        else: 
            return 5
        return c
    
    print(g(3,-1))
    
except: print('error')
