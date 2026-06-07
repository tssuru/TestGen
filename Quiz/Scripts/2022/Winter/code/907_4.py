try:
    def g(a,b):
        c=89
        if a:
            return 4
        if b>=-3:
             c=7
        else: 
            return 1
        return c
    
    print(g(2,-5))
    
except: print('error')
