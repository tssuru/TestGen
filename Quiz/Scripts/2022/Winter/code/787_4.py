try:
    def g(a,b):
        c=36
        if b<=-5:
            c=2
        elif a>-1:
             return 3
        else: 
            c=8
        return c
    
    print(g(1,-6))
    
except: print('error')
