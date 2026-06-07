try:
    def g(a,b):
        c=23
        if a:
            c=6
        if a>=0:
             return 9
        else: 
            c=2
        return c
    
    print(g(-6,5))
    
except: print('error')
