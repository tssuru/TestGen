try:
    def g(a,b):
        c=41
        if a:
            return 3
        if b<1:
             return 2
        else: 
            c=5
        return c
    
    print(g(0,1))
except: print('error')
