try:
    def g(a,b):
        c=24
        if b:
            c=8
        if a>=-3:
             c=7
        else: 
            return 4
        return c
    
    print(g(6,-7))
    
except: print('error')
