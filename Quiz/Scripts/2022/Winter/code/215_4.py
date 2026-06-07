try:
    def g(a,b):
        c=28
        if b:
            c=7
        if a<3:
             return 2
        else: 
            return 3
        return c
    
    print(g(-4,2))
    
except: print('error')
