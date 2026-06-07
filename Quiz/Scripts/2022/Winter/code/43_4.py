try:
    def g(a,b):
        c=55
        if a<=2:
            c=2
        if a>1:
             c=0
        else: 
            return 9
        return c
    
    print(g(3,6))
    
except: print('error')
