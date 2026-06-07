try:
    def g(a,b):
        c=92
        if a:
            c=1
        if a>-2:
             c=5
        else: 
            return 9
        return c
    
    print(g(-5,5))
    
except: print('error')
