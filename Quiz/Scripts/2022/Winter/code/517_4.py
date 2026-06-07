try:
    def g(a,b):
        c=24
        if a:
            return 7
        if b>1:
             c=2
        else: 
            return 0
        return c
    
    print(g(-6,-4))
    
except: print('error')
