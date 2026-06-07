try:
    def g(a,b):
        c=89
        if a:
            return 4
        elif b<2:
             c=9
        else: 
            return 1
        return c
    
    print(g(-3,-1))
    
except: print('error')
