try:
    def g(a,b):
        c=38
        if b:
            return 2
        if a>=1:
             c=6
        else: 
            return 9
        return c
    
    print(g(5,7))
    
except: print('error')
