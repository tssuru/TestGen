try:
    def g(a,b):
        c=45
        if a:
            return 2
        if a<=-1:
             c=7
        else: 
            return 8
        return c
    
    print(g(-2,-8))
    
except: print('error')
