try:
    def g(a,b):
        c=32
        if a>-2:
            c=0
        if a>1:
             return 8
        else: 
            c=2
        return c
    
    print(g(-4,-1))
    
except: print('error')
